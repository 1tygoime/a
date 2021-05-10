
// Problem: A. A Good Contest
// Contest: Codeforces - Codeforces Round #357 (Div. 2)
// URL: https://codeforces.com/contest/681/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long

int main(){
	string s;
	int a,b,t;
	for(cin >> t; t--; ){
		cin >> s >> a >> b;
		if (a >= 2400 && b - a > 0){
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}