#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, min;
    cin >> a >> b;
    long long ucln;
    if (a == 0 || b == 0)
        ucln = a + b;
    else
    {
        if (a == b)
            ucln = a;
        else
        {
            if (a > b)
                min = b;
            else
                min = a;
            for (long long i = min; i >= 1; i--)
            {
                if (a % i == 0 && b % i == 0)
                {
                    ucln = i;
                    break;
                }
            }
        }
    }
    cout << ucln;
    return 0;
}