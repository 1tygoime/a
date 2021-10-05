#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, a[100005], tong(0);
    cin >> n;
    for (long long i = 1; i <= n; i++)
        cin >> a[i];
    for (long long i = 1; i <= n; i++)
    {
        if (tong < 0)
        {
            cout << "DEFEATED AT CITY " << i - 1;
            break;
        }
        else
            tong += a[i];
    }
    if (tong >= 0)
        cout << "VICTORY";
    return 0;
}