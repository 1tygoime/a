#include <bits/stdc++.h>
using namespace std;
//a^3+b^3=x, a>=1,b>=1
//a^3<=x
//a =[1,x^(1/3)],b^3=x-a^3
#define ll long long
#define ull unsigned long long
#define pb push_back
const ll nmax = 1e12+1;

unordered_set <ll> s;

void sol(){
    ll x;
    cin >> x;
    for(ll i = 1; i * i * i <= x; i++)
        if(s.count(x - i * i * i)){
            cout << "YES\n";
            return;
        }
    cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    for(ll i = 1; i * i * i <= nmax; i++)
        s.insert(i * i * i);

    int t;
    for(cin >> t; t--; ){
        sol();
    }

    return 0;
}
