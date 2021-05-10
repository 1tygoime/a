/// https://www.facebook.com/groups/VNOIForum/permalink/3885272768160195/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
//#define ull unsigned long long
const ll mod = 1e9 + 7;
const ll oo = 1e9 + 6;

map <ll, ll> F;

ll f(ll n){
    if (F.count(n)) return F[n];
	ll k=n/2;
	if (n%2==0) { // n=2*k
		return F[n] = (f(k) % oo * f(k) % oo + f(k-1) % oo *f(k-1) % oo) % oo;
	} else { // n=2*k+1
		return F[n] = (f(k) % oo *f(k+1) % oo + f(k-1) % oo *f(k) % oo) % oo;
	}
}

ll mul(ll a, ll b){
    if (b == 0)
        return 0;
    ll t = mul(a, b / 2) % mod;
    t = (t % mod + t % mod) % mod;
    if (b % 2)
        t = (t % mod + a % mod) % mod;
    return t;
}

ll pw(ll a, ll n){
    if (n == 0)
        return 1;
    ll t = pw(a, n / 2) % mod;
    t = t % mod * t % mod;
    if (n % 2)
        t = t % mod * a % mod;
    return t;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll k, a, b, fi;
    cin >> k >> a >> b;
    a = __gcd(a, b);

    /// calc f[gcd(a,b)] % (1e9 + 6)
    F[0] = F[1] = 1;
    fi = (!a ? 0 : f(a - 1));

    /// k ^ f
    fi = pw(k, fi) % mod;
    fi = (fi - 1 + mod) % mod;

    /// res
    cout << fi;

    return 0;
}
