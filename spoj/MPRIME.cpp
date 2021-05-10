
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
const int n = 200005;
bool pri[n];
ll prime[n],res;
int cntp, mprime, k;

ll str2ll (string s){
	ll res(0);
	for(auto &c : s)
		res = 1LL * res * 10 + c - '0';
	return res;
}

string ll2str(ll n){
	string res("");
	for(; n; res += (n % 10) + '0', n /= 10){ /* */ }
	reverse(res.begin(),res.end());
	return res;
}

// for n > 1 //
bool isPrime(ll n){
	for(ll i = 2; i * i <= n; i++)
		if (n % i == 0)
			return 0;
	return 1;
}

void sieve(){
	for(ll i = 2; i <= n; i++) pri[i] = 1;
	for(ll i = 2; i * i <= n; i++)
		if(pri[i])
			for(ll j = i * i; j <= n; j += i)
				pri[j] = 0;
	for(ll i = 2; i <= n; i++)
		if(pri[i])
			prime[++cntp] = i;
}

int main(){
	sieve();
	cin >> k;
    // int k = 500;
	// a[i]a[i+1] , a[i+2]a[i+3]
	for(int i = 1; i <= cntp && mprime <= k; i+=2){
        string s1 = ll2str(prime[i]), s2 = ll2str(prime[i+1]);
        s1 += s2;
        ll tmp = str2ll(s1);
        if (isPrime(tmp))
            mprime++;
        if (mprime == k){
            res = tmp;
            break;
        }
	}
	cout << res;
	cerr << "\nTime elapsed: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";
	return 0;
}
