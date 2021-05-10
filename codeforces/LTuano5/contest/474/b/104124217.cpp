#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

vector <ll> s;
int n, m;
ll x, sum, q;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    for(cin >> n; n--; ){
        cin >> x;
        sum += x;
        s.pb(sum);
    }

    for(cin >> m; m--; ){
        cin >> q;
        cout << lower_bound(s.begin(), s.end(), q) - s.begin() + 1 << '\n';
    }

    return 0;
}
