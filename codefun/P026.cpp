#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c,max,min;
    cin >> a >> b >> c;
    max = a;
    min = a;
    if (max < b) max = b;
    if (max < c) max = c;
    if (min > b) min = b;
    if (min > c) min = c;
    cout << min << " " << (a + b + c - max - min) << " " << max;
    return 0;
}