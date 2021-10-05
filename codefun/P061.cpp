#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    if (n == 1 || n == 2)
        cout << 1;
    else
    {
        long long a1 = 1, a2 = 1, a3, i(3);
        while (i <= n)
        {
            a3 = a1 + a2;
            a1 = a2;
            a2 = a3;
            i++;
        }
        cout << a3;
    }
    return 0;
}