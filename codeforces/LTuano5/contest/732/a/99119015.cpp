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
#define fast ios_base::sync_with_stdio(false);cin.tie();cout.tie();
const string filename = "ABC";
const int nmax=35;
const ll mod = 1e9+7;
int t;
unsigned long long a,b,c;
int main() {
//    freopen( (filename + ".inp").c_str(), "r", stdin);
//    freopen( (filename + ".out").c_str(), "w", stdout);
    fast
    int k,r,i;
    for(cin >> k >> r, i = 1; i < 11; i++)
        if (!(k*i%10) || (k*i%10==r)){
            cout<<i;
            return 0;
        }
	return 0;
}
