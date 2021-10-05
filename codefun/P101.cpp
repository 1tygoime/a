#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k;
    cin >> n;
    double denta = 1 + 8 * n;
    if (denta >= 0)
    {
        double k = (-1 + sqrt(denta)) / 2;
        if ((double)k == (long long)k && k > 0)
            cout << "YES";
        else
            cout << "NO";
    }
    else
        cout << "NO";
    return 0;
}
