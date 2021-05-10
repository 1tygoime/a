/** Happy New Year 2021 **/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define SZ(s) (int)(s).size()
#define fi first
#define se second

int main(){
    fast;
    int T, n, x;
    for(cin >> T; T--; ){
        vi v;
        set <int> s;
        for(cin >> n; n--; ){
            cin >> x;
            v.pb(x);
        }
        for(int i = 0; i < SZ(v); i++){
            for(int j = i + 1; j < SZ(v); j++)
                s.insert(v[j] - v[i]);
        }
        cout << SZ(s) << '\n';
    }
    return 0;
}
