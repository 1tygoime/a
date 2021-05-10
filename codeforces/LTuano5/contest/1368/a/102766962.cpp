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
    int T;
    for(cin >> T; T--; ){
        int cnt = 0;
        ll a, b, n;
        cin >> a >> b >> n;
        while (a <= n && b <= n){
            int ma = max(a,b);
            ma == a ? b += a : a += b;
            cnt++;
        }
        cout << cnt << '\n';    
    }
    return 0;
}
