
// Problem: A. Playing with Dice
// Contest: Codeforces - Codeforces Round #222 (Div. 2)
// URL: https://codeforces.com/contest/378/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int a,b,p1,draw,p2;
int main(){
	fast
	cin >> a >> b;
	for(int x = 1; x <= 6; x++){
		if (abs(a - x) < abs(b - x))
			p1++;
		else if(abs(a - x) == abs(b - x))
			draw++;
		else
			p2++;
	}
	cout << p1 << ' ' << draw << ' ' << p2;
	return 0;	 
}