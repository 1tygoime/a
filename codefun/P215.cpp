#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, thap(0), cao(0), a[100005], min, max;
    cin >> n;
    for (long long i = 1; i <= n; i++)
        cin >> a[i];
    min = a[1];
    max = a[1];
    for (long long i = 1; i <= n; i++)
    {
        if (min > a[i])
            min = a[i];
        if (max < a[i])
            max = a[i];
    }
    for (long long i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            if (a[i] != max)
            {
                cao += (max - a[i]);
                a[i] = max;
            }
        }
        if (i % 2 == 0)
        {
            if (a[i] != min)
            {
                thap += (a[i] - min);
                a[i] -= min;
            }
        }
    }
    cout << cao << '\n'
         << thap;
    return 0;
}
