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

int n, res;
vector <ll> v;
vi chk(1005);
unordered_map <ll, int> ok;


int main(){
    fast;
    for(cin >> n; n--; ){
        int x;
        cin >> x;
        v.pb(x);
    }
    n = SZ(v);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            ll tmp = 3 * v[j] - v[i];
            if (ok.count(tmp) && !chk[j])
                chk[j] = 1, res++;
        }
        for(int j = 0; j < i; j++)
            ok[v[i] + v[j]] = 1;
    }
    cout << res;
    return 0;
}
    