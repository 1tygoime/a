#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const ll mod = 1000000007;

ll bp(ll n){
    if ((2 * n + 1)%3)
        return (n * (n + 1) / 6) % mod * ((2 * n + 1) % mod) % mod;
    return (n * (n + 1) / 2) % mod * ((2 * n + 1) / 3 % mod) % mod;
}

int main(){
    fast
    long double a,b;
    cin >> a >> b;
    ll x = ceil(a), y = floor(b);
    cout << (bp(y) - bp(x - 1) + mod) % mod;
    return 0;
}
    