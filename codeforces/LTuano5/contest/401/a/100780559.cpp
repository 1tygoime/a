
// Problem: A. Vanya and Cards
// Contest: Codeforces - Codeforces Round #235 (Div. 2)
// URL: https://codeforces.com/contest/401/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long

int n, x, k, s;

int main(){
	fast
	for(cin >> n >> x; n--; ){
		cin >> k;
		s += k;
	}
	cout << abs(s / x) + bool(s % x);
	return 0;
}
