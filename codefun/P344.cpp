#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long tong(0), n;
    cin >> n;
    if (n == 1)
        cout << 1;
    else if (n == 2)
        cout << 2;
    else
    {
        long long a1 = 1, a2 = 1, a3, i(3), tong(2);
        while (i <= n)
        {
            a3 = a1 + a2;
            a1 = a2;
            a2 = a3;
            i++;
            tong += a3;
        }
        cout << tong;
    }
    return 0;
}
