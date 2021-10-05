#include <bits/stdc++.h>
using namespace std;

#define MAX 100
#define ll long long

int main()
{
    ll a[MAX][MAX], s(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if (i % 2 == 1 || j % 2 == 1)
                s += a[i][j];
        }
    }
    cout << s;
    return 0;
}
