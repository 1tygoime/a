#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
ull mu(ull x, ull n)
{
    if (n == 1)
        return x;
    if (n == 0)
        return 1;
    ull t = mu(x, n / 2);
    t *= t;
    if (n % 2 == 1)
        t *= x;
    return t;
}

int main()
{
    ull a, n, kq(0), x;
    cin >> x >> n;
    for (ull i = 0; i <= n; i++)
    {
        cin >> a;
        kq += a * mu(x, i);
    }
    cout << kq;
    return 0;
}
