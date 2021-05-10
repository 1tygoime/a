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
const int nmax=2*1e5+5;
//const ll mod = 1e9+7;
int n,a[nmax],t1(1),t2(1);
int main() {
//    freopen( (filename + ".inp").c_str(), "r", stdin);
//    freopen( (filename + ".out").c_str(), "w", stdout);
    fast
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int mi = *min_element(a,a+n);
    int ma = *max_element(a,a+n);
    for(int i = 0; i < n; i++){
        t1 += (a[i]==mi);
        t2 += (a[i]==ma);
    }
    cout << ma - mi << ' ' << (t1*t2);
    return 0;
}