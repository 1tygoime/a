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
#define nmax 1000005

vector <ll> v;
int q, n, x;

int main(){
    fast;
    for(cin >> n; n--; ){
        cin >> x;
        v.pb(x);
    }
    sort(v.begin(),v.end());
    for(cin >> q; q--; ){
        cin >> x;
        auto it = lower_bound(v.begin(), v.end(), x) - v.begin();
//        cout << it;
        if (it == 0)
            cout << v[it] - x << '\n';
        else if (it == SZ(v))
            cout << x - v[it - 1] << '\n';
        else
            cout << min(v[it] - x, x - v[it - 1]) << '\n';
    }
    return 0;
}
