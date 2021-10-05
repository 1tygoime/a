#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long m, n, tich(1);
    cin >> m >> n;
    for (long long i = m; i <= n; i++)
    {
        if (i % 2 == 1)
            tich *= i;
    }
    cout << tich;
    return 0;
}
