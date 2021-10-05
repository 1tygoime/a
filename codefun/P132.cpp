#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, ucln, min, count(0);
    cin >> a >> b;

    // Tim UCLN
    if (a == 0 || b == 0)
        ucln = a + b;
    else
    {
        if (a == b)
            ucln = a;
        else
        {
            if (a < b)
                min = a;
            else
                min = b;
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

    // Check SNT
    if (ucln < 2)
        cout << "no";
    else
    {
        for (long long i = 2; i <= sqrt(ucln); i++)
        {
            if (ucln % i == 0)
                count++;
        }
        if (count == 0)
            cout << "yes";
        else
            cout << "no";
        return 0;
    }
}