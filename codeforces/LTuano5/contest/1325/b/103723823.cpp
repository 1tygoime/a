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
    int n, x;
    unordered_set <int> s;
    for(cin >> n; n--; ){
        cin >> x;
        s.insert(x);
    }
    cout << SZ(s) << '\n';
}

int main(){
    fast;
    int t;
    for(cin >> t; t--; ){
        sol();
    }
    return 0;
}
