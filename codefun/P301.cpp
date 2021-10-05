#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, a[100005], k;
    cin >> n >> k;
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] % k == 0)
            cout << a[i] << ' ';
    }
    return 0;
}