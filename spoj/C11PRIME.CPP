#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

bool pr(ll n){
    for(ll i = 2; i * i <= n; i += (i == 2 ? 1 : 2)){
        if (n % i == 0)
            return 0;
    }
    return (n > 1);
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	ll n;
	cin >> n;
	//2^63~10^18
	for(int q = 2; q <= 63; q++){
        ll p = round(pow(n, 1.0/q)); // can bac q cua n
        // p^q = n?
        ll t = 1;
        for(int i = 1; i <= q; i++) t *= p;
        if(t == n && pr(p)){
            cout<<p<<' ' << q;
            return 0;
        }
	}
	cout<<0;
	return 0;
}
