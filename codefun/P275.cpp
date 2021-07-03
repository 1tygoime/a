#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a[100005], b[100005],n;
    cin >> n;
    for (ll i = 0; i < 100005; i++)
        b[i] = 0;
    for (ll i = 0; i < n; i++){
        cin >> a[i];
        b[a[i]] = 1;
    }
    for (ll i = 0; i < 100005; i++)
        if (b[i] == 1)
            cout << i << ' ';
    return 0;
}

