#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    while (cin >> n)
    {
        long long tong(0);
        long long res = n * n;
        while (res > 0)
        {
            tong += res % 10;
            res /= 10;
        }
        cout << tong << '\n';
    }
    return 0;
}