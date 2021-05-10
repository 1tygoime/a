/* LTo5 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

ll fact(ll n){
    ll res(1);
    for(ll i = 1; i <= n; i++) res *= i;
    return res;
}

int main(){
    fast
    ll a,b;
    cin >> a >> b;
    cout << fact(min(a,b));
    return 0;
}
