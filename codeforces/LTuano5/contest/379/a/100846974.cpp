
// Problem: A. New Year Candles
// Contest: Codeforces - Good Bye 2013
// URL: https://codeforces.com/contest/379/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)


#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    int a, b;
    cin >> a >> b;
    ll res = a;
    for (; a >= b; res += a / b, a = a / b + a % b ){}
    cout << res;
    return 0;
}

