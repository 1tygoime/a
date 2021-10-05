#include <bits/stdc++.h>
using namespace std;

#define MAX 100

long long maxxHang(long long a[][MAX], long long hang, long long cot)
{
    long long maxx = a[hang][0];
    for (long long i = 0; i < cot; i++)
        if (maxx < a[hang][i])
            maxx = a[hang][i];
    return maxx;
}

int main()
{
    long long a[MAX][MAX], m, n;
    cin >> n >> m;
    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < m; j++)
            cin >> a[i][j];
    }
    long long maxx = maxxHang(a, 0, m);
    for (long long i = 0; i < n; i++)
    {
        if (maxx > maxxHang(a, i, m))
            maxx = maxxHang(a, i, m);
    }
    cout << maxx;
    return 0;
}