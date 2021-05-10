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

map<ll, int> ok;
int n, q;

int main(){
    fast;
    for(cin >> n; n--; ){
        ll x;
        cin >> x;
        ok[x]++;
    }
    for(cin >> q; q--; ){
        ll x;
        cin >> x;
        cout << ok[x] << '\n';
    }
    return 0;
}
    