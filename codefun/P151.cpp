#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;
    if (a == 1 && b == 0 && c == 1)
    {
        cout << 2;
        return 0;
    }
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
                cout << "inf";
            else
                cout << 0;
        }
        else
            cout << 1;
    }
    else
    {
        long long denta = b * b - 4 * a * c;
        if (denta < 0)
            cout << 0;
        else if (denta == 0)
            cout << 1;
        else
            cout << 2;
    }
    return 0;
}
