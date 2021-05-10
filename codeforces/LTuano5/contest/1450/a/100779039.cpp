
// Problem: A. Avoid Trygub
// Contest: Codeforces - Codeforces Global Round 12
// URL: https://codeforces.com/contest/1450/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)


#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long

int main(){
	string s;
	int n,t;
	for(cin >> t; t--; ){
		cin >> n >> s;
		sort(s.begin(),s.end());
		cout << s << '\n';
	}
	return 0;
}