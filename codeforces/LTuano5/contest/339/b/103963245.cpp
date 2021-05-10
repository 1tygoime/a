#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define sz(v) (int)(v).size()
//#define OPENFILE
#define filename "339B"

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    #ifdef OPENFILE
    freopen(filename".inp", "r", stdin);
    freopen(filename".out", "w", stdout);
    #endif // OPENFILE

    int n, m;
    vector <ll> v;
    for(cin >> n >> m; m--; ){
        ll x;
        cin >> x;
        v.pb(x);
    }

    ll res = v[0] - 1;
    for(int i = 1; i < sz(v); i++){
        if (v[i - 1] <= v[i])
            res += v[i] - v[i - 1];
        else
            res += n - v[i - 1] + v[i];
    }
    cout << res;

    return 0;
}
