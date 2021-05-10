/*
  _                 _   _    _        _                  _
 | |__  __ _ _ _   | |_| |_ (_)  __ _| |_  ___   _ _ ___(_)
 | '_ \/ _` | ' \  |  _| ' \| | / _` | ' \/ -_) | '_/ _ \ |
 |_.__/\__,_|_||_|  \__|_||_|_| \__, |_||_\___| |_| \___/_|
                                |___/
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//const string filename = "COUNTST";
const int nmax=105;
//const ll mod = 1e9+7;
int n=5; string s1,s2,s3,s4,s5,s6;
int main() {
//    freopen( (filename + ".inp").c_str(), "r", stdin);
//    freopen( (filename + ".out").c_str(), "w", stdout);
    fast
    cin >> s1 >> s2 >> s3 >> s4 >> s5 >> s6;
    cout << ((s1[0]==s2[0] || s1[0]==s3[0] || s1[0]==s4[0] || s1[0]==s5[0] || s1[0]==s6[0] || s1[1]==s2[1] || s1[1]==s3[1] || s1[1]==s4[1] || s1[1]==s5[1] || s1[1]==s6[1])? "YES" : "NO");
}

