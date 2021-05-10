
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define SZ(s) (int)(s).size()

int main(){
    fast;
    int n, x;
    vector <int> v;
    for(cin >> n; n--; ){
        cin >> x;
        v.pb(x);
    }
    int t;
    sort(v.begin(),v.end());
    for(cin >> t; t--; ){
        cin >> x;
        cout << upper_bound(v.begin(), v.end(), x) - v.begin() << '\n';
    }
    return 0;
}
