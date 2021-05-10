/** LTo5 **/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define SZ(s) (int)(s).size()
#define out(v) for ( const auto &c : (v) ) cout << c << ' '; cout << '\n';
int main(){
    fast;
    int t, a, b, c;
    for(cin >> t; t--; ){
        cin >> a >> b >> c;
        cout << ((a + b + c) % 9 == 0 && min(min(a, b), c) >= (a + b + c) / 9 ? "YES\n" : "NO\n");
    }
    return 0;
}
