/* LTo5 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
typedef pair<int, int> pii;
const int nmax = 1e5 + 5;
ll res, s;
int n;
pii a[nmax];

bool cmp(pii x, pii y)
{
    return x.first * y.second > x.second * y.first;
}

int main()
{
    fast
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
        s += a[i].first;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        s -= a[i].first;
        res += 2 * a[i].second * s;
    }
    cout << res;
}
