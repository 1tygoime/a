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
#define out(v) cout << '\n'; for ( const auto &c : (v) ) cout << c << ' '; cout << '\n';

int main(){
	fast
	int t, n, x;
	for(cin >> t; t--; ){
        vector <int> v;
        for(cin >> n; n--; ){
            cin >> x;
            v.pb(x);
        }
        int L = 0, R = v.size() - 1;
        while (L < R){
            cout << v[L++] << ' ' << v[R--] << ' ';
        }
        if (v.size() % 2) cout << v[v.size() / 2];
        cout << '\n';
	}
	return 0;
}
