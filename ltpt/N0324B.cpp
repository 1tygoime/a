#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long

ull gt(ull n)
{
    if (n == 0)
        return 1;
    else
    {
        ull result(1);
        for (ull i = 1; i <= n; i++)
        {
            result *= i;
        }
        return result;
    }
}

int main()
{
    ull n, i(0), cnt(0);
    cin >> n;
    ull rsl = gt(n);
    while (rsl % 5 == 0)
    {
        cnt++;
        rsl /= 5;
    }
    cout << cnt;
    return 0;
}
