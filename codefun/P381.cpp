#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long xa, ya, xb, yb, xc, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;
    long double AB = sqrt(((xb - xa) * (xb - xa)) + ((yb - ya) * (yb - ya)));
    long double AC = sqrt(((xc - xa) * (xc - xa)) + ((yc - ya) * (yc - ya)));
    long double BC = sqrt(((xc - xb) * (xc - xb)) + ((yc - yb) * (yc - yb)));
    long double p = (AB + AC + BC) / 2.0;
    long double s = sqrt(p * (p - AB) * (p - AC) * (p - BC));
    cout << setprecision(9) << fixed << s;
    return 0;
}