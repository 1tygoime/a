#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back


void SOL(){
    ll A, B, ma(LLONG_MIN); // A : atk, B : heal
    int n;
    vector <ll> atk, heal;

    cin >> A >> B >> n;
    atk.resize(n);
    heal.resize(n);
    for(int i = 0; i < n; i++) cin >> atk[i];
    for(int i = 0; i < n; i++) cin >> heal[i];

    for(int i = 0; i < n; i++){
        ll t = heal[i] / A + bool(heal[i] % A);
        B -= t * atk[i];
        ma = max(ma, atk[i]);
    }

    cout << (B + ma >= 0 ? "YES\n" : "NO\n");
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    for(cin >> t; t--; ){
        SOL();
    }

    return 0;
}
