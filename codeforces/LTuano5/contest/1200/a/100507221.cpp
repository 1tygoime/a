
// Problem: A. Hotelier
// Contest: Codeforces - Codeforces Round #578 (Div. 2)
// URL: https://codeforces.com/contest/1200/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
int main(){
	fast
	int n; 
	string hotel("0000000000");
	char c;
	for(cin >> n; n--; ){
		cin >> c;
		if (c == 'L')
			hotel[hotel.find('0')] = '1';
		else if (c == 'R')
			hotel[hotel.rfind('0')] = '1';
		else
			hotel[c - '0'] = '0';
	}
	cout << hotel;
	return 0;
}

