
// Problem: A. Infinity Gauntlet
// Contest: Codeforces - Codeforces Round #485 (Div. 2)
// URL: https://codeforces.com/contest/987/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	map <string, string> m;
	m["purple"] = "Power";
	m["green"] = "Time";
	m["blue"] = "Space";
    m["orange"] = "Soul";
    m["red"] = "Reality";
    m["yellow"] = "Mind";
	int n, res = 6;
	string s;
	for(cin >> n, res = 6 - n; n--; ){
		cin >> s;
		m.erase(s);
	}
	cout << res << '\n';
	for (auto &x : m)
		cout << x.second << '\n';
	return 0;	
}