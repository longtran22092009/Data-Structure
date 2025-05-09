#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

#define IN "A.in"
#define OUT "A.out"


void solve() {
    ll n; cin >> n;
    
    vector <ll> a(n);
    for (auto &x : a) cin >> x;

    for (ll i = 0; i < n; i++) {
        ll length = 1;
        ll GCD = a[i];

        while (i < n && GCD == length) {
            GCD = gcd(GCD. a[i+1]);
        }
    }
}

int main() {
    if (fopen(IN, "r")) {
        freopen(IN, "r", stdin);
        freopen(OUT, "w", stdout);
    }

    ios_base::sync_with_stdio(0); cin.tie(0);
    
    // ll t; cin >> t;
    // while (t--)
    solve();
}
