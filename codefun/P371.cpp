#include <bits/stdc++.h>
using namespace std;
#define FORU(i, a, b) for (int i = a; i <= b; i++)
int main()
{
    int a, b, c, ma(1), lcm, n, b2;
    cin >> n;
    FORU(a, 1, n)
    {
        FORU(b, 1, n)
        {
            FORU(c, 1, n)
            {
                b2 = (a * b) / __gcd(a, b);
                lcm = (b2 * c) / __gcd(b2, c);
                if (lcm > ma)
                    ma = lcm;
            }
        }
    }
    cout << ma;
    return 0;
}
