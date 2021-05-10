
// Problem: A. Tokitsukaze and Enhancement
// Contest: Codeforces - Codeforces Round #573 (Div. 2)
// URL: https://codeforces.com/contest/1191/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main(){
	fast
	int n;
	cin >> n;
	switch(n % 4){
		case 1:
			cout << "0 A";
			break;
		case 2:
			cout << "1 B";
			break;
		case 3:
			cout << "2 A";
			break;
		default:
			cout << "1 A";
			break;
	}
	return 0;	
}