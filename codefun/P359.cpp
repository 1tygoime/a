#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int mi = min(min(a, b), c), ma = max(max(a, b), c), temp = a + b + c;
    a = mi;
    c = ma;
    b = temp - a - c;
    if (a + b > c)
        cout << "NONDEGENERATE";
    else if (a + b == c)
        cout << "DEGENERATE";
    else
        cout << "IMPOSSIBLE";
    return 0;
}
