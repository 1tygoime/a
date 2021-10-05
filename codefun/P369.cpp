#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long a, b, ucln;
    cin >> a >> b;
    if (a == 0 || b == 0)
        ucln = a + b;
    else
    {
        while (a != b)
        {
            if (a > b)
                a -= b;
            else
                b -= a;
        }
        ucln = a;
    }
    cout << ucln;
    return 0;
}