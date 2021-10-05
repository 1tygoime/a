#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double a, b, c;
    cin >> a >> b >> c;
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
                cout << "Inf";
            else
                cout << 0;
        }
        else
            cout << setprecision(2) << fixed << c / b;
    }
    else
    {
        long double denta = b * b - 4 * a * c;
        if (denta >= 0)
        {
            if (denta == 0)
                cout << 1;
            else
            {
                cout << 2;
            }
        }
        else
            cout << 0;
    }
    return 0;
}