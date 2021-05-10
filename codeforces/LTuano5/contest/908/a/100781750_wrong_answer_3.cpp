
// Problem: A. New Year and Counting Cards
// Contest: Codeforces - Good Bye 2017
// URL: https://codeforces.com/contest/908/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)


#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long

string s, vowel = "aeiou";
int cnt;

int main(){
	fast
	cin >> s;
	for (auto &c : s){
		cnt += ((int(vowel.find(c)) >= 0) || (isdigit(c) && (c - '0')% 2 == 0));
	}
	cout << cnt;
	return 0;
}
