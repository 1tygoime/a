
// Problem: A. Team Olympiad
// Contest: Codeforces - Codeforces Round #279 (Div. 2)
// URL: https://codeforces.com/contest/490/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)


#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    int n, x;
    vector <int> prog, math, PE;
    cin >> n;
    for (int i = 1; i <= n; i++){
    	cin >> x;
    	if (x == 1)
    		prog.push_back(i);
    	else if (x == 2)
    		math.push_back(i);
    	else
    		PE.push_back(i);
    }
    x = min(min(prog.size(),math.size()),PE.size());
    cout << x << '\n';
    for(int i = 0; i < x; i++)
    	cout << prog[i] << ' ' << math[i] << ' ' << PE[i] << '\n';
    return 0;
}

