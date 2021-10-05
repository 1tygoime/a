#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

ll pw(ll a, ll n)
{
    if (n == 0)
        return 1;
    ll t = pw(a, n / 2) % mod;
    t = t * t % mod;
    if (n % 2 == 1)
        t = (t * a) % mod;
    return t;
}

int main()
{
    ll a, n;
    cin >> a >> n;
    ll b = pw(a, n + 1) - 1;
    ll c = a - 1;
    cout << (b * pw(c, mod - 2)) % mod;
    return 0;
}
