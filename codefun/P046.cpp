#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c, d, result1(1);
    cin >> a >> b >> c >> d;
    for (long long i = 1; i <= (c + d); i++)
        result1 *= (a + b);
    cout << result1;
    return 0;
}