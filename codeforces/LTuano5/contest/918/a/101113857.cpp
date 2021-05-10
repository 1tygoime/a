
// Problem: A. Eleven
// Contest: Codeforces - Codeforces Round #459 (Div. 2)
// URL: https://codeforces.com/contest/918/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
#define taskname "Eleven"
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
bool ok[10005];
int f1 = 1, f2 = 1, f3 = 2, n;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);	
    cin >> n;
    ok[1] = 1;
    for(; f3 <= n; ok[f3] = 1, f3 = f1 + f2, f1 = f2, f2 = f3);
    for(int i = 1; i <= n; i++){
    	cout << (ok[i] ? 'O' : 'o');
    }
	return 0;	
}