//Shbh = 2*SABC

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int xa, ya, xb, yb, xc, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;
    cout << abs((xb - xa) * (yc - ya) - (xc - xa) * (yb - ya));
    return 0;
}
