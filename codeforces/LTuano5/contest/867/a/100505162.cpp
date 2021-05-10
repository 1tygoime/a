
// Problem: A. Between the Offices
// Contest: Codeforces - Codeforces Round #437 (Div. 2, based on MemSQL Start[c]UP 3.0 - Round 2)
// URL: https://codeforces.com/contest/867/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)


#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main(){
	fast
	int sf(0), fs(0), n;
	string s;
	cin >> n >> s;
	for(int i = 0; i < s.size()-1; i++){
		sf += (s.substr(i,2)=="SF");
		fs += (s.substr(i,2)=="FS");
	}
	cout << (sf > fs? "YES" : "NO");
	return 0;	
}