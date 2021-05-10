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

void sol(){
    int n;
    ll ma = LLONG_MIN;
    cin >> n;
    vector <ll> v(n + 5);
    for(int i = 1; i <= n; i++){
        cin >> v[i];
    }
    for(int i = 1; i <= n; i++){
        int j = i;
        ll t = 0;
        while (j <= n){
            t += v[j];
            j += v[j];
        }
        ma = max(ma, t);
    }
    cout << ma << '\n';
}

int main(){
    fast;
    int t;
    for(cin >> t; t--; ){
        sol();
    }
    return 0;
}
