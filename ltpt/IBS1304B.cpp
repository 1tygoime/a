#include <bits/stdc++.h>
using namespace std;
#define ll long long

int binsearch(ll a[], int n, ll f)
{
    int cnt(0);
    int l = 1, r = n, pos = 0, start = -1;
    while (l <= r)
    {
        int mid = (r + l) / 2;
        if (a[mid] > f)
            r = mid - 1;
        else if (a[mid] == f)
        {
            start = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    int end = -1;
    l = 1, r = n;
    while (l <= r)
    {
        int mid = (r + l) / 2;
        if (a[mid] > f)
            r = mid - 1;
        else if (a[mid] == f)
        {
            end = mid;
            l = mid + 1;
        }
        else
            l = mid + 1;
    }
    if (start != -1 && end != -1)
        for (int i = 0; i + start <= end; i++)
        {
            cnt++;
        }
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, cnt, q;
    ll a[100005], x;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cin >> q;
    while (q--)
    {
        cin >> x;
        cout << binsearch(a, n, x) << '\n';
    }
}
