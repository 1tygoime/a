//ISX2904D

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int nmax = 1e5 + 5;
int n, a[nmax], b[nmax];
int main()
{
    fast
            cin >>
        n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    sort(a, a + n);
    sort(b, b + n);
    ll res(0);
    for (int i = 0; i < n; i++)
        res += abs(a[i] - b[i]);
    cout << res;
    return 0;
}
