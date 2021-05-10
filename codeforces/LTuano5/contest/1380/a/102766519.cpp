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
    fast;
    int T, n, x;
    for(cin >> T; T--; ){
        bool check = 0;
        vector <int> v;
        for(cin >> n; n--; ){
            cin >> x;
            v.pb(x);
        }
        for(int i = 1; i < SZ(v) - 1; i++)
            if (v[i] > v[i - 1] && v[i] > v[i + 1]){
                cout << "YES\n" << i++ << ' ' << i++ << ' ' << i << '\n';
                check = 1;
                break;
            }
        if (!check) cout << "NO\n";
    }
    return 0;
}
