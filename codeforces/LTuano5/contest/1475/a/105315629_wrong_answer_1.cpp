#include <bits/stdc++.h>
using namespace std;
#define ll long long

void sol(ll n){
    if (n < 3){
        cout << "NO\n";
        return;
    }
    if (n % 2){
        cout << "YES\n";
    } else{
        n /= 2;
        cout << (n % 2 ? "YES\n" : "NO\n");
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int T;
    for(cin >> T; T--; ){
        ll n;
        cin >> n;
        sol(n);
    }
    return 0;
}
