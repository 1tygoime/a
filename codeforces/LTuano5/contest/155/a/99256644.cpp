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
const int nmax=1e3+5;
//const ll mod = 1e9+7;
int n,a[nmax],cnt;
int main() {
//    freopen( (filename + ".inp").c_str(), "r", stdin);
//    freopen( (filename + ".out").c_str(), "w", stdout);
    fast
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int mi=a[0],ma=a[0];
    for(int i = 0; i < n; i++){
        if(a[i]>ma){
            cnt++;
            ma=a[i];
        }
        if(a[i] < mi){
            cnt++;
            mi=a[i];
        }
    }
    cout << cnt;
}