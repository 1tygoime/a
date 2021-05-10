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
    int T;
    for(cin >> T; T--; ){
        vi v(3);
        int n;
        cin >> v[0] >> v[1] >> v[2] >> n;
        sort(v.begin(), v.end());
        cout << ((n -= 2 * v[2] - v[0] - v[1]) % 3 || n < 0 ? "NO\n" : "YES\n");
    }
    return 0;
}
