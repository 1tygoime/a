
// Problem: A. Suffix Three
// Contest: Codeforces - Codeforces Round #607 (Div. 2)
// URL: https://codeforces.com/contest/1281/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)


#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main(){
	fast
	int n; string s;
	for(cin >> n; n--; ){
		cin >> s;
		if(s.substr(s.size()-2) == "po")
			cout << "FILIPINO\n";
		else if(s.substr(s.size()-2) == "su")
			cout << "JAPANESE\n";
		else
			cout << "KOREAN\n";
	}
	return 0;	
}