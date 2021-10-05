#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a[100005], n, tong(0);
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
        if ((a[i] % 5 == 1) && (a[i] % 2 == 0))
            tong += a[i];
    }
    cout << tong;
    return 0;
}