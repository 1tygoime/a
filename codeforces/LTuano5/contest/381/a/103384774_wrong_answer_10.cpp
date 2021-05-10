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


void sol(){
    int n, x, s(0), d(0);
    bool chk = 0;
    vi v;
    for(cin >> n; n--; ){
       cin >> x;
       v.pb(x);
    }
    int L = 0, R = SZ(v) - 1;
    while (L <= R){
        if (v[L] >= v[R]){
            if (chk)
                s += v[L++];
            else
                d += v[L++];
        }
        else{
            chk ? s += v[R--] : d += v[R--];
        }
        chk = (chk ? 0 : 1);
    }
    if (s <= d) swap(s, d);
    cout << s << ' ' << d;
}

int main(){
    fast;
    int t;
    for(t = 1; t--; ){
        sol();
    }
    return 0;
}
