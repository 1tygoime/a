#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long a = n / sqrt(n);
    for (long long i = trunc(sqrt(n)); i >= 1; i--)
        if (n % i == 0)
        {
            cout << i << ' ' << n / i;
            return 0;
        }
}
