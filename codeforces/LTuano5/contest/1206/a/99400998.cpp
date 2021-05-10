/* LTo5 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//const string filename = "SWAPK";
//const int nmax=1e5;
//const ll mod = 1e9+7;
int n,m,ma1(INT_MIN),ma2(INT_MIN),x;
int main() {
//    freopen( (filename + ".inp").c_str(), "r", stdin);
//    freopen( (filename + ".out").c_str(), "w", stdout);
    fast
    for (cin >> n; n--; ){
        cin >> x;
        ma1=max(ma1,x);
    }
    for (cin >> m; m--; ){
        cin >> x;
        ma2=max(ma2,x);
    }
    cout << ma1 << ' ' << ma2;
	return 0;
}
