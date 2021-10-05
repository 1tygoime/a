#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long n, temp1, tong(0);
    cin >> n;
    temp1 = n;
    while (n > 0)
    {
        tong += n % 10;
        n /= 10;
    }
    if (temp1 % tong == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}