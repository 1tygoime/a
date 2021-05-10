/// Segment Tree
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ull unsigned long long
#define pb push_back
const int maxn = 2 * 1e5 + 5;
// chung minh bo nho can dung k qua 4*n phan tu:
//https://vnoi.info/wiki/algo/data-structures/segment-tree-extend.md
int a[maxn], st[4 * maxn], n, q;
 
/// cap nhat tren cay ST
/// cap nhat cay con [l,r] goc id
/*
void update(int id, int l, int r){
    if (l == r){
        st[id]
    }
}
*/
 
/// tim min doan [u,v]
/// id: nut cua segment tree doan [l,r]
int get(int l, int r, int u, int v, int id){
    if (v < l || r < u){
        /// doan[u,v] khong giao nhau voi [l,r]
        return INT_MAX;
    }
    if (u <= l && r <= v){
        /// doan [l,r] nam trong doan [u,v] dang xet
        /// tra lai thong tin nam o nut id
        return st[id];
    }
    int mid = (l + r) / 2;
    /// neu khong roi vao 2 TH tren
    /// tiep tuc goi de quy voi cac nut con
    return min(get(l, mid, u, v, id * 2 + 1), get(mid + 1, r, u, v, id * 2 + 2));
}
 
/// dung cay st
void build(int l, int r, int id){
    /// doan gom 1 phan tu
    if (l == r){
        st[id] = a[l];
        return;
    }
    /// xu ly cac nut con
    int mid = (l + r) / 2;
    // voi moi node i, node con ben trai o vi tri 2 * i + 1, node con ben phai o vi tri 2 * i + 2
    build(l, mid, id * 2 + 1); // +1 do array tinh tu 0
    build(mid + 1, r, id * 2 + 2);
    /// cap nhat min [l,r]
    st[id] = min(st[id * 2 + 1], st[id * 2 + 2]);
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    cin >> n >> q;
    for(int i = 0; i < n; i++)
        cin >> a[i];
 
    /// build segment tree
    build(0, n - 1, 0); // nut 0 bieu dien cho ca mang
//    cout << st[0];
    while(q--){
        int L, R;
        cin >> L >> R;
        cout << get(0, n - 1, --L, --R, 0) << '\n';
    }
    return 0;
}