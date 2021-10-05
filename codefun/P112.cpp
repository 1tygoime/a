#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x, y;
    cin >> x >> y;
    if (x == 0 && y == 0)
        cout << "1 2 3 4";
    else
    {
        if (x == 0 && y > 0)
            cout << "1 2";
        if (x == 0 && y < 0)
            cout << "3 4";
        if (y == 0 && x < 0)
            cout << "2 3";
        if (y == 0 && x > 0)
            cout << "1 4";
    }
    if (x < 0 && y > 0)
        cout << 2;
    if (x < 0 && y < 0)
        cout << 3;
    if (x > 0 && y > 0)
        cout << 1;
    if (x > 0 && y < 0)
        cout << 4;
    return 0;
}