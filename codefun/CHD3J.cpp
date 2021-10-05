#include <bits/stdc++.h>
using namespace std;
long double a1, a2, a3, a4, a5, a6, res;
int main()
{
    while (cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6)
    {
        long double a = sqrt((a1 - a3) * (a1 - a3) + (a2 - a4) * (a2 - a4));
        long double b = sqrt((a1 - a5) * (a1 - a5) + (a2 - a6) * (a2 - a6));
        long double c = sqrt((a3 - a5) * (a3 - a5) + (a4 - a6) * (a4 - a6));
        res = (sqrt((2 * a * b - a * a - b * b + c * c) * (2 * a * b + a * a + b * b - c * c))) / 4.0;
        cout << setprecision(7) << fixed << res;
        cout << "00000000\n";
    }
}
