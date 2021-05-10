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
const int nmax=1e5;
//const ll mod = 1e9+7;
ll s1,s2,s3;
int n,x;
int main() {
//    freopen( (filename + ".inp").c_str(), "r", stdin);
//    freopen( (filename + ".out").c_str(), "w", stdout);
    fast
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        s1+=x;
    }
    for(int i = 0; i < n-1; i++){
        cin >> x;
        s2+=x;
    }
    for(int i = 0; i < n-2; i++){
        cin >> x;
        s3+=x;
    }
    cout << s1-s2 << '\n' << s2-s3;
    return 0;
}
