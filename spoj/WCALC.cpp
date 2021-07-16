// quy dong mau so de rut a tu cac hang so
// a = ... , nhan thay m tang a giam=>limit a=0 m=2*n
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int cnt;
int main(){
    ll b,n;
    cin >> b >> n;
    for(int m = 2*n; m--; ){
        cnt+=(m!=n && b*m*(2*n-m)%(n*n)==0);
    }
    cout << cnt;
    return 0;
}
