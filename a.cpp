#include<bits/stdc++.h>
using namespace std;

#define ll long long

// A.

ll fact(ll n) {
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll x = 10 - n;
    ll c = fact(x) / (fact(2) * fact(x - 2));
    cout << c * 6 << "\n";
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
