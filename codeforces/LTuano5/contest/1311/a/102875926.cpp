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
    int T, a, b;
    for(cin >> T; T--; ){
        cin >> a >> b;
        if (a == b)
            cout << 0;
        else if (a < b)
            cout << ((b - a) % 2 ? 1 : 2);
        else
            cout << ((a - b) % 2 ? 2 : 1);
        cout << '\n';
    }
    return 0;
}
