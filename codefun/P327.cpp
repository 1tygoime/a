#include <bits/stdc++.h>
using namespace std;

long long gt(long long n)
{
    if (n == 0 || n == 1)
        return 1;
    else
    {
        long long result(1);
        for (long long i = 2; i <= n; i++)
            result *= i;
        return result;
    }
}

long long C(long long k, long long n)
{
    return gt(n) / (gt(k) * gt(n - k));
}

int main()
{
    long long n, tong(0);
    cin >> n;
    if (n <= 2)
        cout << 1;
    else
    {
        for (long long i = 1; i < n - 2; i++)
        {
            tong += C(i, (n - 2));
        }
        tong += 2;
        cout << tong;
    }
    return 0;
}