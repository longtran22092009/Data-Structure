#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector <ll> tree(400000), a(100001);

void build(ll v, ll l, ll r) {
    if (l == r) {
        tree[v] = a[l]; // l = r;
    }
    else {
        ll mid = (l+r) / 2;
        build(2*v, l, mid);
        build(2*v+1, mid+1, r);

        tree[v] = tree[2*v] + tree[2*v+1];
    }
}

void update(ll v, ll l, ll r, ll pos, ll value) {
    if (l == r) {
        tree[v] = value;
    }
    else {
        ll mid = (l+r) / 2;

        if (pos <= mid) {
            update(2*v, l, mid, pos, value);
        }
        else {
            update(2*v+1, mid+1, r, pos, value);
        }

        tree[v] = tree[2*v] + tree[2*v+1];
    }
}

ll query(ll v, ll tl, ll tr, ll l, ll r) {
    if (l > r) return 0;
    if (tl == l && tr == r) 
        return tree[v];
    
    ll tmid = (tl+tr) / 2; 
    ll s1 = query(2*v, tl, tmid, l, min(r, tmid));
    ll s2 = query(2*v+1, tmid+1, tr, max(l, tmid+1), r);
    
    return s1 + s2;
}

int main() {
    freopen("A.in", "r", stdin);
    freopen("A.out", "w", stdout);
    
    ll n; cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    build(1, 0, n-1);
    for (int i = 1; i <= 15; i++) {
        cout << tree[i] << " ";
    }
    cout << endl;

    update(1, 0, n-1, 4, 10);
    for (int i = 1; i <= 15; i++) {
        cout << tree[i] << " ";
    }
    cout << endl;

    cout << query(1, 0, n-1, 2, 5);
}
