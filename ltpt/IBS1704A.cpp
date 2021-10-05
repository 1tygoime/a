#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int nmax = 1e6 + 5;

int q;
ll a[nmax];

int main()
{
    fast for (int i = 1; i <= nmax; i++)
        a[i] = 1LL * i * i * i - 2 * i + 5;
    for (cin >> q; q--;)
    {
        ll k;
        cin >> k;
        int x = lower_bound(a + 1, a + 1 + nmax, k) - a;
        cout << (a[x] == k ? x : -1) << '\n';
    }
    return 0;
}
