#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if ((x2 - x1) * (y3 - y1) == (x3 - x1) * (y2 - y1))
        cout << 1;
    else
        cout << 0;
    return 0;
}