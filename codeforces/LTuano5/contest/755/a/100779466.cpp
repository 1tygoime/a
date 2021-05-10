
// Problem: A. PolandBall and Hypothesis
// Contest: Codeforces - 8VC Venture Cup 2017 - Elimination Round
// URL: https://codeforces.com/contest/755/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long

bool notP(int n){
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return 1;
	return 0;
}

int main(){
	fast
	int n;
	cin >> n;
	if (n == 1){
		cout << 3;
		return 0;
	}
	if (n % 2){
		cout << 1;
		return 0;
	}
	for(int i = 1; i <= 1000; i++)
		if (notP(n * i + 1)){
			cout << i;
			return 0;
		}
	return 0;
}
