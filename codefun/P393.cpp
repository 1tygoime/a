#include <bits/stdc++.h>
using namespace std;

#define mod 1000

int main()
{
    long long n, gt(1), tong(0);
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        gt = gt % mod * i % mod;
        tong = (tong + gt) % mod;
    }
    cout << setw(4) << setfill('0') << tong;
}
