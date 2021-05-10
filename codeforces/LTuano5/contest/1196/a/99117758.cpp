#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const string filename = "ABC";
const int nmax=35;
const ll mod = 1e9+7;
int t;
unsigned long long a,b,c;
int main() {
//    freopen( (filename + ".inp").c_str(), "r", stdin);
//    freopen( (filename + ".out").c_str(), "w", stdout);
    fast
    for(cin >> t; t--; ){
        cin >> a >> b >> c;
        cout << (a+b+c)/2 << (t>0?"\n":"");
    }
	return 0;
}
