#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a, b;
    cin >> a >> b;
    float result = (a * a * a) + (b * b * b);
    cout << setprecision(2) << fixed << a * a * a + b * b * b;
    return 0;
}