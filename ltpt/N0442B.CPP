#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
#define SZ(s) (int)(s).size()
#define fi first
#define se second
#define nmax 100005
#define out(v)                \
    for (const auto &c : (v)) \
        cout << c << ' ';     \
    cout << '\n';

int main()
{
    int n;
    vector<ll> v;
    ll res(LLONG_MIN);
    for (cin >> n; n--;)
    {
        ll x;
        cin >> x;
        v.pb(x);
    }
    sort(v.begin(), v.end());
    cout << max(v[0] * v[0] + v[1] * v[1], v.back() * v.back() + v[SZ(v) - 2] * v[SZ(v) - 2]);
    //    for(int i = 0; i < SZ(v); i++){
    //        for(int j = i + 1; j < SZ(v); j++)
    //            res = max(res, v[i] * v[i] + v[j] * v[j]);
    //    }
    //    cout << res;
    return 0;
}
