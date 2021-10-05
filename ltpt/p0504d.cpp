#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool bins(ll a[], int l, int r, ll x)
{
    int m;
    while (l <= r)
    {
        m = (l + r) / 2;
        if (a[m] == x)
            return true;
        else if (a[m] > x)
            r = m - 1;
        else
            l = m + 1;
    }
    return false;
}

int main()
{
    int n;
    long long a[100005], x, cnt(0);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> x;
    sort(a, a + n);
    for (int i = 0; i < n - 1; i++)
    {
        if (bins(a, i + 1, n - 1, x - a[i]))
            cnt++;
    }
    cout << cnt;
    return 0;
}
