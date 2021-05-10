#include <bits/stdc++.h>
using namespace std;
#define sz(v) (int)(v).size()
void sol(){
    int n, sum = 0, x;
    vector <int> v;
    for(cin >> n >> x; n--; ){
        int inp;
        cin >> inp;
        v.push_back(inp);
        sum += inp;
    }
    if (sum % x){
        cout << sz(v) << '\n';
        return;
    }
    int L = -1, R = -1;
    for(int i = 0; i < sz(v); i++){
        if (v[i] % x){
            if (L == -1)
                L = i;
            R = i;
        }
    }
    if (L == -1 || R == -1) cout << "-1\n";
    else{
        cout << sz(v) - min(L + 1, sz(v) - R) << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    for(cin >> t; t--; ){
        sol();
    }
    return 0;
}
