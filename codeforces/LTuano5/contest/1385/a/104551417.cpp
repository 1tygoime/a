#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define sz(v) (int)(v).size()

void sol(){
    vector <int> v(3);
    for (int &i : v) cin >> i;
    sort(v.begin(), v.end());
    if (v[1] != v[2]){
        cout << "NO\n";
        return;
    }
    cout << "YES\n" << v[0] << ' ' << v[0] << ' ' << v[2] << '\n';
}

int main(){
    int t;
    for(cin >> t; t--; ){
        sol();
    }
    return 0;
}
