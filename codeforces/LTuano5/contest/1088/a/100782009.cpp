
// Problem: A. Ehab and another construction problem
// Contest: Codeforces - Codeforces Round #525 (Div. 2)
// URL: https://codeforces.com/contest/1088/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long

int x;

int main(){
	fast
	cin >> x;
	for(int a = 1; a <= x; a++){
		for(int b = 1; b <= x; b++)
			if(a*b > x && a % b == 0 && a/b < x){
				cout << a << ' ' << b;
				return 0;
			}
	}
	cout << -1;
	return 0;
}
