#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll a[100005],n,x,tong(0);
    cin >> n >> x;
    for (ll i = 0 ; i < n; i++){
        cin >> a[i];
        tong += a[i];
    }
    cout << abs(tong)/x + (abs(tong)%x==0?0:1);
    return 0;
}
