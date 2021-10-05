#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

bool c;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        ll s = 1LL * i * (i + 1) / 2;
        if (s % 2)
            continue;
        // check if exists i : 1+2+...+i=s/2
        ll x = s * 2;
        x = x * 2 + 1;
        if (sqrt(x) == (ll)sqrt(x))
        {
            c = 1;
            cout << i << ' ';
        }
    }

    if (!c)
        cout << -1;

    return 0;
}
