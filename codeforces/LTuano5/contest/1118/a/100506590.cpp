
// Problem: A. Water Buying
// Contest: Codeforces - Codeforces Round #540 (Div. 3)
// URL: https://codeforces.com/contest/1118/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
int main(){
	fast
	int q;
	for(cin >> q; q--; ){
		ll n;
		int a,b;
		cin >> n >> a >> b;
		cout << (n / 2) * min(a * 2, b) + (n % 2) * a << '\n';
	}
	return 0;
}
