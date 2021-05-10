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
//const int nmax=1e5;
//const ll mod = 1e9+7;

int main() {
//    freopen( (filename + ".inp").c_str(), "r", stdin);
//    freopen( (filename + ".out").c_str(), "w", stdout);
    fast
    int n,m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        if(i%2){
            for(int j = 1; j <= m; j++)
                cout << '#';
            cout<<'\n';
        }
        else{
            cout << (i%4==0?"#":"");
            for(int j = 1; j < m; j++)
                cout << '.';
            cout << (i%4==2?"#":"") << '\n';
        }
    }
    return 0;
}
