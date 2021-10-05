#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, x, a[100005], location;
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
    cin >> x;
    for (long long i = 1; i <= n; i++)
    {
        if (a[i] == x)
            location = i;
    }
    cout << location;
    return 0;
}