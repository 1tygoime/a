#include <bits/stdc++.h>
using namespace std;
#define ll long long
int t, n;
ll ma, a[100005];

void fmax()
{
    ma = a[1];
    for (int i = 2; i <= n; i++)
        if (ma < a[i])
            ma = a[i];
}

void calc()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    fmax();
    for (int i = 1; i <= ma; i++)
    {
        if (a[i] != i)
        {
            cout << i;
            break;
        }
    }
}

int main()
{
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        calc();
        if (i < t)
            cout << '\n';
    }
    return 0;
}
