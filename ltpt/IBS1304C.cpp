#include <bits/stdc++.h>
using namespace std;
int n, q, x;
pair<int, int> a[200005];

int binsearch()
{
    int l = 1, r = n;
    int pos = 0;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m].first == x)
        {
            pos = m;
            break;
        }
        else if (a[m].first < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return pos;
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a + 1, a + 1 + n);
    cin >> q;
    while (q--)
    {
        cin >> x;
        cout << a[binsearch()].second << '\n';
    }
    return 0;
}
