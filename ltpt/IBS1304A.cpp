#include <bits/stdc++.h>
using namespace std;
#define ll long long
int binsearch(ll a[], int n, ll f)
{
    ll l = 1, r = n;
    int pos = 0;
    while (l <= r)
    {
        ll m = (l + r) / 2;
        if (a[m] == f)
        {
            pos = m;
            break;
        }
        else if (a[m] < f)
            l = m + 1;
        else
            r = m - 1;
    }
    return pos;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, q;
    ll a[100005], x;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cin >> q;
    for (int i = 1; i <= q; i++)
    {
        cin >> x;
        cout << binsearch(a, n, x) << '\n';
    }
    return 0;
}
