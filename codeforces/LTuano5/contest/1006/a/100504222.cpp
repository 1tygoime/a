
// Problem: A. Adjacent Replacements
// Contest: Codeforces - Codeforces Round #498 (Div. 3)
// URL: https://codeforces.com/contest/1006/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main(){
	fast
	int n,x;
	for (cin >> n; n--; ){
		cin >> x;
		cout << (x % 2 ? x : --x) << ' ';
	}
	return 0;	
}