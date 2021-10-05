#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << ' ';
    }
    return 0;
}