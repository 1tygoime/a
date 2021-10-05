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
                cout << "NO";
        }
        else
            cout << setprecision(2) << fixed << -c / b;
    }
    else
    {
        long double denta = b * b - 4 * a * c;
        if (denta >= 0)
        {
            if (denta == 0)
                cout << setprecision(2) << fixed << -(b / (2 * a));
            else
            {
                long double x1 = (-b - sqrt(denta)) / (2 * a);
                long double x2 = (-b + sqrt(denta)) / (2 * a);
                if (x1 >= x2)
                    swap(x1, x2);
                cout << setprecision(2) << fixed << x1 << ' ' << x2;
            }
        }
        else
            cout << "NO";
    }
    return 0;
}
