#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define m 1000000007
ll k, n;

ll gt(ll x)
{
    if (x == 0 || x == 1)
        return x;
    ll res(1);
    for (ll i = 1; i <= x; i++)
        res = res % m * i % m;
    return res;
}

ll pw(ll a, ll y)
{
    if (y == 0)
        return 1;
    ll t = pw(a, y / 2) % m;
    t = t * t % m;
    if (y % 2 == 1)
        t = (t * a) % m;
    return t;
}

int main()
{
    cin >> k >> n;
    ll t1 = gt(n);
    ll t2 = gt(k) % m * gt(n - k) % m;
    cout << (t1 * (pw(t2, m - 2))) % m;
    return 0;
}
