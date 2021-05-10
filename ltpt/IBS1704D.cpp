#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define SZ(s) (int)(s).size()
#define fi first
#define se second
#define nmax 1000005

map <int, pii> ok;
int n, x, q;

int main(){
    fast;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> x;
            ok[x] = {i, j};
        }
    }
    for(cin >> q; q--; ){
        cin >> x;
        if (ok.count(x))
            cout << ok[x].fi << ' ' << ok[x].se << '\n';
        else cout << -1 << '\n';
    }
    return 0;
}
