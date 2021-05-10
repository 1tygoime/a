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
//const int nmax=35;
//const ll mod = 1e9+7;
int n,t;

int main() {
//    freopen( (filename + ".inp").c_str(), "r", stdin);
//    freopen( (filename + ".out").c_str(), "w", stdout);
    fast
    cin >> n >> t;
    if(t == 10){
        if(n == 1)
            cout<<-1;
        else{
            cout << 1;
            for (int i = 1; i < n; i++)
                cout << 0;
        }
    }
    else
        for(int i = 1; i <= n; i++)
            cout << t;
	return 0;
}