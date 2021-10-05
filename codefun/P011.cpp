#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c;
    cin >> a >> b >> c;
    long double p = (a + b + c) / 2.0;
    long double s = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << setprecision(6) << fixed << s;
    return 0;
}