
// Problem: A. Make a triangle!
// Contest: Codeforces - Codeforces Round #516 (Div. 2, by Moscow Team Olympiad)
// URL: https://codeforces.com/contest/1064/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
	fast
	int a[4];
	cin >> a[0] >> a[1] >> a[2];
	sort(a,a+3);
	if (a[2] < a[0] + a[1])
		cout << 0;
	else
		cout << a[2] + 1 - a[1] - a[0];
	return 0;
}