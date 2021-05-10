/* LTo5 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const ll mod = 20122007;
const int a = 3;

ll pw (ll t){
    if (t == 0)
        return 1;
    ll x = pw(t/2)%mod;
    x = (x*x)%mod;
    if (t % 2)
        x = (x*a)%mod;
    return x;
}

int main(){
    ll n,res(1);
    cin >> n;
    for(ll i = 1; i * i <= n; i++){
        if (n % i == 0){
            res = res % mod * (pw(i) - 1) % mod;
            if(n / i != i)
                res = res % mod * (pw(n/i) - 1) % mod;
        }
    }
    cout << res;
    return 0;
}
