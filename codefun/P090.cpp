#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a[1000], n;
    cin >> n;
    for (long long i = 1; i <= n; i++)
        cin >> a[i];
    long long max = 1, dem = 1;
    for (long long i = 1; i <= n - 1; i++)
    {
        if (a[i] < a[i + 1])
            dem++;
        else
        {
            if (max <= dem)
                max = dem;
            dem = 1;
        }
    }
    long long max1 = 1, dem1 = 1;
    for (long long i = 1; i <= n - 1; i++)
    {
        if (a[i] > a[i + 1])
            dem1++;
        else
        {
            if (max <= dem1)
                max = dem1;
            dem1 = 1;
        }
    }
    if (max > max1)
        cout << max;
    else
        cout << max1;
    return 0;
}
