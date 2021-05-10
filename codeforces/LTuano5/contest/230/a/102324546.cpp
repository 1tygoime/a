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

vector <pii> krt;
int s, n, x, y;

int main(){
    fast;
    for(cin >> s >> n; n--; ){
        cin >> x >> y;
        krt.pb({x, y});
    }
    sort(krt.begin(), krt.end());
    for (auto &p : krt){
        if (s <= p.first){
            return !(cout << "NO");
        }
        s += p.second;
    }
    cout << "YES";
    return 0;
}
