#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, mod, gt(1), tong(0);
    cin >> n >> mod;
    for (long long i = 1; i <= n; i++)
    {
        gt = gt % mod * i % mod;
        tong = (tong % mod + gt) % mod;
    }
    cout << tong;
}
