/*
 LTo5
*/

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
/*
n%4==0,n%6==0,n%15!=0 => [n/12] - [n/60];
n%4==0,n%6!=0,n%15==0 => 0
n%6==0,n%15==0,n%4 != 0 => [n/30] - [n/60]
Do cac TH ko giao nhau
=> CT
*/

ll cnt(ll n){
    return n/12+n/30-2*(n/60);
}

int main(){
    fast
    int t;
    ll a,b;
    for (cin >> t; t--; ){
        cin >> a >> b;
        cout << cnt(b)-cnt(a-1) << '\n';
    }
    return 0;
}

