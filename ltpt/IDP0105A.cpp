#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n,t,l,r,a[100005];
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> t;
    for (ll i = 1; i <= n; i++){
        cin >> a[i];
        if (a[i] < 0)
            a[i]=0;
        a[i]+=a[i-1];
    }
    while (t--){
        cin >> l >> r;
        cout << a[r]-a[l-1] << '\n';
    }
    return 0;
}


