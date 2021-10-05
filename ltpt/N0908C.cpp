#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct PS
{
    ll ts;
    ll ms;
};
PS ps[100005];
ll k;
void sx()
{
    PS tmp;
    for (ll i = 0; i < k - 1; i++)
    {
        for (ll j = i + 1; j < k; j++)
        {
            if ((1.0 * ps[i].ts / ps[i].ms) > (1.0 * ps[j].ts / ps[j].ms))
            {
                tmp = ps[i];
                ps[i] = ps[j];
                ps[j] = tmp;
            }
        }
    }
}
void rutgon()
{
    for (ll i = 0; i < k; i++)
    {
        ll tmp = __gcd(ps[i].ts, ps[i].ms);
        ps[i].ts /= tmp;
        ps[i].ms /= tmp;
    }
}
int main()
{
    cin >> k;
    for (ll i = 0; i < k; i++)
    {
        cin >> ps[i].ts >> ps[i].ms;
    }
    rutgon();
    sx();
    for (ll i = 0; i < k; i++)
    {
        cout << ps[i].ts << ' ' << ps[i].ms;
        if (i < k - 1)
            cout << '\n';
    }
    return 0;
}
