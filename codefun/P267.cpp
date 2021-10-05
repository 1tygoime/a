#include <bits/stdc++.h>
using namespace std;

int main()
{
    typedef long long ll;
    ll a[100005], n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    ll ma = a[1];
    for (ll i = 1; i <= n; i++)
        if (ma > a[i])
            ma = a[i];
    ll lct;
    for (ll i = 1; i <= n; i++)
        if (ma == a[i])
        {
            lct = i;
            break;
        }
    cout << lct - 1;
    return 0;
}
