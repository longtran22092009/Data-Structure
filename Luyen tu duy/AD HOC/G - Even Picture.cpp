#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

#define IN "A.in"
#define OUT "A.out"


void solve() {
    // Coordinate look like: (x, y)
    ll n; cin >> n;

    /*
    VD: n = 4 (even)
         ##   
        ####
        ####
         ##

        n = 3 (odd)
         ##
        ####
        ###
         ##
    */

    ll piece = n*2 + 4;
    if (n % 2 != 0) piece += 2;

    cout << piece << endl;
    cout << "0 1\n";
    cout << "0 2\n";
    cout << n/2 + 1 << " 1\n";
    cout << n/2 + 1 << " 2\n";

    for (ll i = 1; i <= n/2; i++) {
        cout << i << " 0\n";
        cout << i << " 1\n";
        cout << i << " 2\n";
        cout << i << " 3\n";
    }

    if (n % 2 != 0) cout << "0 2/n"
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
