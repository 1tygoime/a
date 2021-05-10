
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
    int t, n, x;
    for(cin >> t; t--; ){
        unordered_set <int> s;
        for(cin >> n, n *= 2; n--; ){
            cin >> x;
            if (s.find(x) == s.end()){
                cout << x << ' ';
                s.insert(x);
            }
        }
        cout << '\n';
    }
    return 0;
}
