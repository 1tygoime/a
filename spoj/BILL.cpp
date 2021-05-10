/* LTo5 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

ll kWh2VND(ll k){
    if (k <= 100) return k * 200;
    if (k <= 10000)
        return 20000+ (k-100) * 300;
    if (k <= 1000000)
        return 2990000 + (k - 10000)*500;
    return 497990000 + (k - 1000000)*700;
}

ll VND2kWH(ll v){
    ll res(0);
    if (v > 497990000){
        res += (v - 497990000)/700;
        v = 497990000;
    }
    if (v > 2990000){
        res += (v - 2990000)/500;
        v = 2990000;
    }
    if (v > 20000){
        res += (v - 20000)/300;
        v = 20000;
    }
    res += v/200;
    return res;
}

int main(){
    fast
    ll x,y;
    cin >> x >> y;
    x = VND2kWH(x);
    for(int i = 0; i <= x; i++){
        ll tmp = kWh2VND(x - i) - kWh2VND(i);
        if(tmp==y){
            cout << kWh2VND(i);
            return 0;
        }
    }
    return 0;
}
