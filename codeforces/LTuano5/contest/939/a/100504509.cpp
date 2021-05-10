
// Problem: A. Love Triangle
// Contest: Codeforces - Codeforces Round #464 (Div. 2)
// URL: https://codeforces.com/contest/939/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main(){
	fast
	int n,a[5005];
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	for(int i = 1; i <= n; i++)
		if (a[a[a[i]]] == i){
			cout << "YES";
			return 0;
		}
	cout << "NO";
	return 0;	
}