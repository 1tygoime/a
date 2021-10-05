#include <bits/stdc++.h>
using namespace std;

unsigned long long gt(unsigned long long n)
{
    if (n == 0 || n == 1)
        return 1;
    else
    {
        unsigned long long result(1);
        for (unsigned long long i = 1; i <= n; i++)
            result *= i;
        return result;
    }
}

int main()
{
    unsigned long long k, n;
    cin >> k >> n;
    unsigned long long result = gt(n) / (gt(k) * gt(n - k));
    cout << result;
    return 0;
}