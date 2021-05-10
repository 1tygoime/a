#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ull unsigned long long
#define pb push_back
const int maxn = 2 * 1e5 + 5;
int a[maxn], st[4 * maxn], n, q;

int get(int l, int r, int u, int v, int id){
    if (v < l || r < u){
        return 0;
    }
    if (u <= l && r <= v){
        return st[id];
    }
    int mid = (l + r) / 2;
    return get(l, mid, u, v, id * 2 + 1) + get(mid + 1, r, u, v, id * 2 + 2);
}

void build(int l, int r, int id){
    if (l == r){
        st[id] = a[l];
        return;
    }
    int mid = (l + r) / 2;
    build(l, mid, id * 2 + 1);
    build(mid + 1, r, id * 2 + 2);
    st[id] = st[id * 2 + 1] + st[id * 2 + 2];
}

void update(int id, int l, int r, int i, int v){
    if (i < l || r < i){
        return;
    }
    if (l == r){
        st[id] = v;
        return;
    }
    int mid = (l + r) / 2;
    update(id * 2 + 1, l, mid, i, v);
    update(id * 2 + 2, mid + 1, r, i, v);
    st[id] = st[id * 2 + 1] + st[id * 2 + 2];
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> q;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    build(0, n - 1, 0);
    while(q--){
        int qry, k, u;
        cin >> qry >> k >> u;
        if (qry == 1){
            update(0, 0, n - 1, k - 1, u);
        }
        else
            cout << get(0, n - 1, k - 1, u - 1, 0) << '\n';
    }
    return 0;
}
