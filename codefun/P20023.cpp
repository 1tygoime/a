#include <bits/stdc++.h>
using namespace std;
long long dem(long long a, long long b)
{
    long long i, d = 0;
    for (i = 1; i <= sqrt(b); i++)
    {
        if (b % i == 0)
        {
            if (b / i <= a)
            {
                if (i != b / i)
                    d += 2;
                else
                    d += 1;
            }
        }
    }
    return d;
}
int main()
{
    long long n, x;
    while (cin >> n >> x)
    {
        cout << dem(n, x) << '\n';
    }
    return 0;
}
