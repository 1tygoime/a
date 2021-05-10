/* LTo5 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define nmax 1005

bool check(int n){
    bool d[10];
    memset(d,false,sizeof(d));
    for(;n > 0; n/=10){
        if (d[n%10])
            return false;
        d[n%10]=true;
    }
    return true;
}

int main(){
    fast
    int l, r;
    cin >> l >> r;
    for(;l <= r; l++){
        if(check(l)){
            cout << l;
            return 0;
        }
    }
    cout << -1;
    return 0;
}
