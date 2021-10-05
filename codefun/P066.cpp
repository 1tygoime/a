#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long n, temp1, dem(0);
    long double tbc(0);
    cin >> n;
    temp1 = n;
    while (n > 0)
    {
        dem++;
        tbc += n % 10;
        n /= 10;
    }
    tbc /= dem;
    cout << setprecision(2) << fixed << tbc;
    return 0;
}