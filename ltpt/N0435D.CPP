#include <bits/stdc++.h>
using namespace std;
#define ll long long
//ll a[1000005], ma[1000005], mi[]
vector<ll> a(1000005), ma(1000005), mi(1000005);
int n;
ll res = LLONG_MIN;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    ma[1] = a[1];
    mi[n] = a[n];
    for (int i = 2; i <= n; i++)
        ma[i] = max(ma[i - 1], a[i]); // maximize aj
    for (int i = n - 1; i > 0; i--)
    {
        mi[i] = min(mi[i + 1], a[i]); // minimize ak
    }
    for (int i = 2; i < n; i++)
        res = max(res, a[i] + ma[i - 1] - mi[i + 1]);
    cout << res;
    return 0;
}
