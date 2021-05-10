
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
#define nmax 1000000000
#define out(v) for (const auto &c: (v)) cout << c << ' '; cout << '\n';

void sol(){
    int n;
    ll x, mi(0), ma(0), inp;
    for(cin >> n >> x; n--; ){
        cin >> inp;
        mi += inp;
        ma += (inp / x) + bool(inp % x);
    }
    cout << (mi / x) + bool(mi % x) << ' ' << ma << '\n';
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("1471A.inp","r",stdin);
    freopen("1471A.out","w",stdout);
    #endif // ONLINE_JUDGE
    fast;
    int t;
    for (cin >> t; t--; ){
        sol();
    }
    return 0;
}
