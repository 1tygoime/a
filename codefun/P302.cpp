#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, a[100005];
    cin >> n >> m;
    for (long long i = 1; i <= n; i++)
        cin >> a[i];
    for (long long j = 1; j <= m; j++)
    {
        long long tong(0), x, y;
        cin >> x >> y;
        for (long long k = x; k <= y; k++)
        {
            tong += a[k];
        }
        cout << tong << '\n';
    }
    return 0;
}