#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000 //
int main()
{
    ll a[MAX][MAX], n, m, x1, y1, x2, y2, s(0);
    cin >> n >> m;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= m; j++)
            cin >> a[i][j];
    }
    cin >> x1 >> y1 >> x2 >> y2;
    for (ll i = x1; i <= x2; i++)
    {
        for (ll j = y1; j <= y2; j++)
            s += a[i][j];
    }
    cout << s;
    return 0;
}
