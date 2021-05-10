#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

vector <ll> v = {0};
ll cnt, res;

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        ll x;
        cin >> x;
        v.pb(v.back() + x);
    }
    for(int i = 1; i < n; i++){
        if(v[i] * 3 == v.back() * 2)
            res += cnt; // ghep
        if (v[i] * 3 == v.back())
            cnt++;
    }
    cout << res;
    return 0;
}
