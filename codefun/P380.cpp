#include <bits/stdc++.h>
using namespace std;

#define FORU(i, a, b) for (int i = a; i <= b; i++)

int main()
{
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    FORU(x, -n, n)
    {
        FORU(y, -n, n)
        {
            if (a * x * x + b * x + c == y)
                cout << x << ' ' << y << ' ';
        }
    }
    return 0;
}
