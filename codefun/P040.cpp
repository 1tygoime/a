#include <bits/stdc++.h>
using namespace std;
int main()
{
    long double a, b;
    cin >> a >> b;
    long double result = a * a + a * b + b * b;
    cout << setprecision(2) << fixed << result;
    return 0;
}