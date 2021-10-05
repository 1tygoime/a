#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == c || a == d || b == c || b == d)
        cout << 1;
    else
        cout << 0;
    return 0;
}
