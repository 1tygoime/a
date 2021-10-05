#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c, t, count(0);
    cin >> a >> b >> c >> t;
    if (a == 0 && b == 0 && c == 0)
    {
        cout << 0;
        return 0;
    }
    else
    {
        for (long long x = 0; x <= 101; x++)
        {
            for (long long y = 0; y <= 101; y++)
            {
                for (long long z = 0; z <= 101; z++)
                    if (a * x + b * y + c * z == t)
                        count++;
            }
        }
    }
    cout << count;
    return 0;
}
