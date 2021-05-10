/* LTo5 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const ll M = 111539786;
map <ll, ll> fibo;
ll N;

ll f(ll n){
    if (fibo.count(n))
        return fibo[n];
    ll k = n/2;
    if (n%2)
        return fibo[n] = (f(k)*f(k+1) + f(k-1)*f(k))%M;
    else
        return fibo[n] = (f(k)*f(k) + f(k-1)*f(k-1))%M;
}

int main(){
    fast
    int t;
    fibo[0] = fibo[1] = 1;
    for (cin >> t; t--; ){
        cin >> N;
        cout << f(N) << (t > 0 ? "\n" : "");
    }
    return 0;
}
