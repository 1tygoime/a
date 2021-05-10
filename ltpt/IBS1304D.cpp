#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

ll cnt5(ll x){
    ll res = 0;
    while(x){
        x /= 5;
        res += x;
    }
    return res;
}

ll bs(ll n){
    ll L = 0, R = 1e17, res = -1;
    while(L <= R){
        ll M = (L + R) / 2;
        if (cnt5(M) >= n){
            res = M, R = M - 1;
        } else L = M + 1;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;
    for(cin >> T; T--; ){
        ll n;
        cin >> n;
        cout << bs(n) << '\n';
    }

    return 0;
}
    