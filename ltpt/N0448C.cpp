#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define sz(v) (int)(v).size()

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    ll ma(LLONG_MIN), S = 0, x;
    for (cin >> n; n--;)
    {
        cin >> x;
        S += x;
        ma = max(ma, S);
        if (S < 0)
            S = 0;
    }
    cout << ma;
    return 0;
}
