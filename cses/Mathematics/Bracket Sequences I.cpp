#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

const ll mod = 1e9 + 7;

ll pw(ll a, ll n){
    if (!n)
        return 1;

    ll tmp = pw(a, n / 2) % mod;
    tmp = tmp % mod * tmp % mod;
    if (n & 1)
        tmp = tmp % mod * a % mod;

    return tmp;
}

int main(){
    int n;
    cin >> n;
    if (n % 2) return !(cout << 0);

    ///catalan number
    n /= 2;
    ll t = 1, m = 1;
    for(int i = 1; i <= n; i++)
        m = (m % mod * i % mod) % mod;
    for(int i = n + 2; i <= 2 * n; i++)
        t = (t % mod * i % mod) % mod;
    cout << (t % mod * pw(m, mod - 2) % mod) % mod;

    return 0;
}
