#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int main()
{
    ll a, n, tich(1);
    cin >> a >> n;
    for (long long i = 1; i <= n; i++)
    {
        tich = tich % mod * a % mod;
    }
    cout << tich;
    return 0;
}
