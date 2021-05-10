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

int main(){
    fast;
    int t, n, m;
    for(cin >> t; t--; ){
        cin >> n >> m;
        cout << n * m / 2 + ((n * m) % 2) << '\n';
    }
	return 0;
}
