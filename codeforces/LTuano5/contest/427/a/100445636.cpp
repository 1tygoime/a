
// Problem: A. Police Recruits
// Contest: Codeforces - Codeforces Round #244 (Div. 2)
// URL: https://codeforces.com/contest/427/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

/* LTo5 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int n, police, crime, x;
int main(){
    fast
    for (cin >> n; n--; ){
        cin >> x;
        if (x > 0)
            police+=x;
        else if (police) police--;
        else crime++;
    }
    cout << crime;
    return 0;
}

