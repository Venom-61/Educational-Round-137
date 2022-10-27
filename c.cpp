#include <bits/stdc++.h>
using namespace std;
 
#define ll long long

void solve() {
    int n;
    string s;
    cin >> n >> s;
    vector<int> a(n);
    for(auto& x : a) cin >> x;

    bool ok = true;
    for(int i = 0; i < n; i++) {
        if(s[i] == '1'){
            ok = false;
            break;
        }
    }
    if(ok) {
        cout << "0\n";
        return ;
    }
    
    vector<vector<int>> dp(n, vector<int>(2, 0));
    if(s[0] == '1') dp[0][1] = a[0];
    for(int i = 1; i < n; i++) {
        if(s[i] == '0')
            dp[i][0] = max(dp[i-1][0], dp[i-1][1]);
        else {
            dp[i][0] = dp[i-1][0] + a[i-1];
            dp[i][1] = max(dp[i-1][0], dp[i-1][1]) + a[i];
        }
    }
    cout << max(dp[n-1][1], dp[n-1][0]) << "\n";
}
 
int main() {
    ios::sync_with_stdio(false);

    int tc = 1;
    cin >> tc;
    while(tc--) 
        solve();

    return 0;
}
