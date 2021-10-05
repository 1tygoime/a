#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int factorize(ull n)
{
    int cnt(0);
    for (ull i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            cnt++;
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }
    if (n != 1)
        cnt++;
    return cnt;
}

int main()
{
    ull n;
    cin >> n;
    cout << factorize(n);
    return 0;
}
