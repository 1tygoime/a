#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long dem(0);
    for (long long i = 1; i <= n; i++)
    {
        int k = i;
        while (k % 5 == 0)
        {
            dem++;
            k /= 5;
        }
    }
    cout << dem;
    return 0;
}
