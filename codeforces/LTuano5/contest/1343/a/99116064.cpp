#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const string filename = "ABC";
const int nmax=35;
int t,n,x,i;
int main() {
//    freopen( (filename + ".inp").c_str(), "r", stdin);
//    freopen( (filename + ".out").c_str(), "w", stdout);
    fast
    for(cin >> t; t--; ){
        for(cin >> n, x=3,i=2; n%x; x += 2*i, i*=2){}
        cout << n/x << (t>0?"\n":"");
    }
	return 0;
}
