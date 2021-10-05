#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c, min, max;
    cin >> a >> b >> c;
    min = max = a;
    if (min > b)
        min = b;
    if (min > c)
        min = c;
    if (max < b)
        max = b;
    if (max < c)
        max = c;
    cout << min << " " << max;
    return 0;
}