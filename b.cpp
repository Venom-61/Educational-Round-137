#include<bits/stdc++.h>
using namespace std;

#define ll long long

// B. Permutation Value

void solve() {
    int n;
    cin >> n;
    vector<int> ans;
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0)
            ans.push_back(i); 
    }

    for(int i = n; i >= 1; i--) {
        if(i % 2 == 1) 
            ans.push_back(i);
    }

    for(auto x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; ++i) {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}
