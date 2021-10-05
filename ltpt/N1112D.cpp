#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod;

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
    ll n, tmp, tmp1;
    while (cin >> n >> mod)
    {
        tmp = pw(2, n);
        tmp1 = (n - 1) % mod * tmp % mod;
        tmp1 = (tmp1 + 1) % mod;
        cout << tmp1 << '\n';
    }
    return 0;
}
