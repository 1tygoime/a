/*
  _                 _   _    _        _                  _
 | |__  __ _ _ _   | |_| |_ (_)  __ _| |_  ___   _ _ ___(_)
 | '_ \/ _` | ' \  |  _| ' \| | / _` | ' \/ -_) | '_/ _ \ |
 |_.__/\__,_|_||_|  \__|_||_|_| \__, |_||_\___| |_| \___/_|
                                |___/
*/

// ban chat la PT thanh tich cac TS 2 , 3
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//const string filename = "COUNTST";
//const int nmax=1e3+5;
//const ll mod = 1e9+7;
int n,t,c2,c3;
int main() {
//    freopen( (filename + ".inp").c_str(), "r", stdin);
//    freopen( (filename + ".out").c_str(), "w", stdout);
    fast
    for(cin >> t; t--; ){
        cin >> n;
        c2=0;c3=0;
        while(!(n%2)){
            n/=2;
            c2++;
        }
        while(!(n%3)){
            n/=3;
            c3++;
        }
        cout << ((n==1&&(c2<=c3))?2*c3-c2:-1) << '\n';
    }
    return 0;
}