/*
  _                 _   _    _        _                  _
 | |__  __ _ _ _   | |_| |_ (_)  __ _| |_  ___   _ _ ___(_)
 | '_ \/ _` | ' \  |  _| ' \| | / _` | ' \/ -_) | '_/ _ \ |
 |_.__/\__,_|_||_|  \__|_||_|_| \__, |_||_\___| |_| \___/_|
                                |___/
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//const string filename = "COUNTST";
//const int nmax=2*1e3;
//const ll mod = 1e9+7;

int t;
ll x,y,n;

int main() {
//    freopen( (filename + ".inp").c_str(), "r", stdin);
//    freopen( (filename + ".out").c_str(), "w", stdout);
    fast
    for(cin >> t; t--; ){
        cin >> x >> y >> n;
        ll a=n%x;
        if(a>y)
            cout << n-a+y;
        else if(a<y)
            cout << n-a-x+y;
        else cout << n;
        cout << '\n';
    }
    return 0;
}