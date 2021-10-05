#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a[100005], n;
    cin >> n;
    for (long long i = 1; i <= n; i++)
        cin >> a[i];
    for (long long i = 1; i <= n - 1; i++)
    {
        for (long long j = i + 1; j <= n; j++)
        {
            if (a[i] > a[j])
            {
                long long temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << a[n] << ' ' << a[n - 1] << ' ' << a[n - 2];
    return 0;
}