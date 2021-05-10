#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 10005
int main()
{
    ll a[MAX],n,m;
    int check[MAX+1],b[MAX];
    cin >> n >> m;
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    for (ll i = 1; i <= m; i++)
        cin >> b[i];
    for (ll i = 1; i <= n; i++)
        check[i] = 0;
    for (ll i = 1; i <= m; i++){
        check[b[i]] = 1;
        for (ll i = 1; i <= n; i++)
            if (check[i] == 0)
                cout << a[i] << ' ';
        cout << '\n';
    }
    return 0;
}

