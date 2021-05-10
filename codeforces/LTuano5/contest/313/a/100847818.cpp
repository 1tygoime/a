
// Problem: A. Ilya and Bank Account
// Contest: Codeforces - Codeforces Round #186 (Div. 2)
// URL: https://codeforces.com/problemset/problem/313/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    if (n >= 0){
    	cout << n;
    	return 0;
    }
    int t = n / 10, t1 = (t / 10) * 10 + n % 10;
    cout << max(t, t1);
    return 0;
}