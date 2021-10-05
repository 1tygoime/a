#include <bits/stdc++.h>
using namespace std;

long long mu10(long long n)
{
    if (n == 0)
        return 1;
    else
    {
        long long result(1);
        for (long long i = 1; i <= n; i++)
            result *= 10;
        return result;
    }
}

int main()
{
    long long tp, np(0), i(0);
    cin >> tp;
    while (tp > 0)
    {
        np += (tp % 2) * mu10(i);
        i++;
        tp /= 2;
    }
    cout << np;
    return 0;
}