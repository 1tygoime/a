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
#define out(v) for(const auto &c : v ) cout << c << ' ';
#define se second

int main(){
    fast;
    int T, x, n;
    for(cin >> T; T--; ){
        set <int> s;
        for(cin >> n; n--; ){
            cin >> x;
            if (s.count(x))
                x++;
            s.insert(x);
        }
        cout << SZ(s) << '\n';
    }
    return 0;
}

