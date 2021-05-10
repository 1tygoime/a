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
int n,x,i,cnt;
int main() {
//    freopen( (filename + ".inp").c_str(), "r", stdin);
//    freopen( (filename + ".out").c_str(), "w", stdout);
    fast
    for(cin >> n >> x,i=1;i<=sqrt(x);i++){
        if(x%i==0&&x/i<=n){
            cnt+=1+(i!=x/i);
        }
    }
    cout<<cnt;
	return 0;
}
