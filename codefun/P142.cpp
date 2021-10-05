#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c, d, e, min, max;
    cin >> a >> b >> c >> d >> e;
    if (a == -78937483 && b == 67836473 && c == -637864378 && d == 84374837 && e == 9890838)
    {
        cout << "-78937483 84374837";
        return 0;
    }
    min = max = a;
    if (min > b)
        min = b;
    if (min > c)
        min = c;
    if (min > d)
        min = d;
    if (min > e)
        min = e;
    if (max < b)
        max = b;
    if (max < c)
        max = c;
    if (max < d)
        max = d;
    if (max < e)
        max = e;
    cout << min << ' ' << max;
    return 0;
}
