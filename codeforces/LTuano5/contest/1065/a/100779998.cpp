
// Problem: A. Vasya and Chocolate
// Contest: Codeforces - Educational Codeforces Round 52 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1065/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)


#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long


int main(){
	fast
	int t;
	unsigned long long s, a, b, c;
	for(cin >> t; t--; ){
		cin >> s >> a >> b >> c;
		cout << s / c + (s / c) / a * b << '\n';
	}
	return 0;
}
