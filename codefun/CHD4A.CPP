#include <bits/stdc++.h>
using namespace std;
 
#define rep for
#define ii if
#define ll long long
const ll mod = 1e9 + 7;
 
ll X[1000005], A[1000005];
int t, n;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
	X[0] = 1, X[1] = 1, A[0] = 1, A[1] = 0;
	rep(int i = 2; i <= 1000000; i++){
		X[i] = (X[i - 1] % mod + X[i - 2] % mod) % mod;
		A[i] = (A[i - 1] % mod + A[i - 2] % mod) % mod;
	}
 
	cin >> t;
	while(t--){
		cin >> n;//--n;
		cout << A[n] << ' ' << (X[n] - A[n] + mod) % mod << '\n';
	}
 
	return 0;
}