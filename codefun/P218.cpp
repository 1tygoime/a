#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long m, k;
    long double n;
    cin >> n >> m >> k;
    long double res = n;
    while (k > 0)
    {
        n /= m;
        res += n;
        k--;
    }
    cout << setprecision(6) << fixed << res;
    return 0;
}
