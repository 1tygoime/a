#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d1, m1, y1, d2, m2, y2;
    cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;
    if (y1 == y2)
    {
        if (m1 == m2)
        {
            if (d1 == d2)
                cout << 0;
            else
            {
                if (d1 > d2)
                    cout << 2;
                else
                    cout << 1;
            }
        }
        else
        {
            if (m1 > m2)
                cout << 2;
            else
                cout << 1;
        }
    }
    else
    {
        if (y1 > y2)
            cout << 2;
        else
            cout << 1;
    }
    return 0;
}