#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long n;
    cin >> n;
    if (n == 1)
        cout << 1;
    else if (n == 2)
        cout << 1 << ' ' << 1;
    else
    {
        unsigned long long a1 = 1, a2 = 1, i = 3, a3;
        cout << a1 << ' ' << a2 << ' ';
        while (i <= n)
        {
            a3 = a1 + a2;
            a1 = a2;
            a2 = a3;
            i++;
            cout << a3 << ' ';
        }
    }
    return 0;
}