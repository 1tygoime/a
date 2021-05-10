#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

vector <int> v;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    for(cin >> t; t--; ){
        v.clear();
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            v.pb(x);
        }
        sort(v.begin(), v.end());
        if (v[0] + v[1] <= v[n - 1]) cout << "1 2 " << n << '\n';
        else cout << "-1\n";
    }

    return 0;
}
