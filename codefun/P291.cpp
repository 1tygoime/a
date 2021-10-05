#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a[100005], n, dem(1);
    cin >> n;
    for (long long i = 0; i < n; i++)
        cin >> a[i];
    for (long long i = 0; i < n - 1; i++)
    {
        for (long long j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                long long temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (long long i = 0; i < n - 1; i++)
    {
        if (a[i] != a[i + 1])
            dem++;
    }
    cout << dem;
    return 0;
}
