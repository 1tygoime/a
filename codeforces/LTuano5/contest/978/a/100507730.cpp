
// Problem: A. Remove Duplicates
// Contest: Codeforces - Codeforces Round #481 (Div. 3)
// URL: https://codeforces.com/contest/978/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
int main(){
	fast
	int n, a[55];
	map <int, int> dup;
	vector <int> res;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		dup[a[i]]++;
	}
	for(int i = 0; i < n; i++){
		if(dup[a[i]] == 1)
			res.push_back(a[i]);
		else
			dup[a[i]]--;
	}
	cout << res.size() << '\n';
	for(auto &x : res)
		cout << x << ' ';
	return 0;
}

