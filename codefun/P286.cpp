#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, a[100005], tong(0);
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
        tong += a[i];
    }
    cout << tong;
    return 0;
}