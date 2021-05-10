
// Problem: A. Summer Camp
// Contest: Codeforces - Codeforces Round #352 (Div. 2)
// URL: https://codeforces.com/contest/672/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long

string int2str(int n){
	string res = "";
	for( ; n ; res += (n % 10) + '0', n /= 10){}
	reverse(res.begin(),res.end());
	return res;
}

int main(){
	string s = "";
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++) s += int2str(i);
	cout << s[--n];
	return 0;
}