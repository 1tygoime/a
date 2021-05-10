
// Problem: M. DHEXP - Biểu thức
// Contest: Codeforces - OI set 5
// URL: https://codeforces.com/group/FLVn1Sc504/contest/274811/problem/M
// Memory Limit: 1024 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)


#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
int n,k;
ll res(0),x;
multiset <ll,greater <ll> > sl;
int main(){
	cin >> n >> k >> x;
	res = x;
	for(int i = 1; i < n; i++){
		cin >> x;
		sl.insert(x);
	}
	for(auto &i : sl){
		res += (k > 0 ? i : -i);
		k--;
	}
	cout << res;
	return 0;
}