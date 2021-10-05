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
                cout << "Infinitive solution";
            else
                cout << "No solution";
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
                cout << setprecision(2) << fixed << -(b / (2 * a));
            else
            {
                cout << setprecision(2) << fixed << (-b - sqrt(denta)) / (2 * a) << ' ' << (-b + sqrt(denta)) / (2 * a);
            }
        }
        else
            cout << "No solution";
    }
    return 0;
}