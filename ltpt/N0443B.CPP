#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define sz(v) v.size()

vector <ll> a, b;

int main(){
    int n, k, res = 0;
    cin >> n >> k;
    while(n--){
        int x;
        cin >> x;
        if (x > 0)
            a.pb(x);
        else
            b.pb(abs(x));
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i = 0; i < sz(b); i++){
        int L = lower_bound(a.begin(), a.end(), b[i]) - a.begin(); // nam ko thap hon nu
        int R = upper_bound(a.begin(), a.end(), b[i] + k) - a.begin(); // ko cao hon qua k mm
        if(L > R || L == sz(b) || R <= 0){}
        else
            res += R - L;
    }
    cout << res;
    return 0;
}
