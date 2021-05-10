#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

bool c(ll n, ll m){
    if ((m * m - n / m)%3) return 0;
    long long x = ceil(pow(1.0*n, 1.0/3));
    long long y = ceil(pow(4.0 * n, 1.0/3));
    ///DEBUG
//    cout << x << ' ' << y<<'\n';;
//    return 0;
    ///END
    ll cc= m * m - (4 * (m * m - n / m) / 3);
    if(cc<0) return 0;
    return (x <= m && m <= y && sqrt(cc) == (ll)sqrt(cc));
}

void sol(){
    ll n;
    cin >> n;
    if (n <= 1) {
        cout << "NO\n";
        return;
    }
    for(ll i = 1; i * i <= n; i++){
        if (n % i == 0 && (c(n, i) || c(n, n / i))){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
//    sol();
    int t;
    for(cin >> t; t--; ){
        sol();
    }
    return 0;
}
