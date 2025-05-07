#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

#define IN "A.in"
#define OUT "A.out"


/*
    ## Định lí Fermat ##
    x^k mod m = x^(k mod (m−1)) mod m
*/


const ll MOD = (ll) 1e9 + 7;

ll powMod(ll a, ll b, ll m) {
    ll res = 1;
    a %= m;

    while (b) {
        if (b % 2 == 1) {
            res *= a;
            res %= m;
        }

        a *= a;
        a %= m;
        b /= 2;
    }

    return res;
}

// a^(b^c) mod m = a^(b^c mod (m-1)) mod m
ll calculate(ll a, ll b, ll c) {
    ll bc = powMod(b, c, MOD-1);
    ll ans = powMod(a, bc, MOD);

    return ans;
} 

void solve() {
    ll a, b, c;
    cin >> a >> b >> c;

    cout << calculate(a, b, c) << endl;
}

int main() {
    if (fopen(IN, "r")) {
        freopen(IN, "r", stdin);
        freopen(OUT, "w", stdout);
    }

    ios_base::sync_with_stdio(0); cin.tie(0);
    
    ll t; cin >> t;
    while (t--)
        solve();
}
