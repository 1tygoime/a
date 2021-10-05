#include <bits/stdc++.h>
using namespace std;
int main()
{
    short int a, b, c, d;
    long long result1(1), result2(1);
    cin >> a >> b >> c >> d;
    for (long long i = 1; i <= b; i++)
        result1 *= a;
    for (long long j = 1; j <= d; j++)
        result2 *= c;
    cout << result1 + result2;
    return 0;
}