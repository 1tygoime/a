
// Problem: A. Army
// Contest: Codeforces - School Personal Contest #1 (Winter Computer School 2010/11) - Codeforces Beta Round #38 (ACM-ICPC Rules)
// URL: https://codeforces.com/contest/38/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long

int n, a, b, d[105], res;

int main(){
	fast
	cin >> n;
	for(int i = 1; i < n; i++)
		cin >> d[i];
	cin >> a >> b;
	for(; a < b; a++)
		res += d[a];
	cout << res;
	return 0;
}
