
// Problem: A. Reconnaissance 2
// Contest: Codeforces - Codeforces Beta Round #34 (Div. 2)
// URL: https://codeforces.com/contest/34/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, x, mi(INT_MAX), pos1(-1), pos2(-1);
	vector <int> v;
	for (cin >> n; n--; ){
		cin >> x;
		v.push_back(x);
	}
	for(unsigned int i = 0; i < v.size() - 1; i++){
		if (abs(v[i] - v[i + 1]) < mi){
			mi = abs(v[i] - v[i + 1]);
			pos1 = i + 1;
			pos2 = i + 2;
		}
	}
	if (abs(v.back() - v[0]) < mi){
		pos1 = v.size();
		pos2 = 1;
	}
	cout << pos1 << ' ' << pos2;
	return 0;	
}