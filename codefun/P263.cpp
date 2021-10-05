#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, min, a[100005];
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    min = a[1];
    for (long long i = 1; i <= n; i++)
    {
        if (min > a[i])
            min = a[i];
    }
    cout << min;
    return 0;
}