/*
  _                 _   _    _        _                  _
 | |__  __ _ _ _   | |_| |_ (_)  __ _| |_  ___   _ _ ___(_)
 | '_ \/ _` | ' \  |  _| ' \| | / _` | ' \/ -_) | '_/ _ \ |
 |_.__/\__,_|_||_|  \__|_||_|_| \__, |_||_\___| |_| \___/_|
                                |___/
*/
#include <bits/stdc++.h>
#define ll long long
#define solve using namespace std; int main(){ll n,k; cin>>n>>k;if(n%2){if(k<=(n-1)/2+1) cout << (k-1)*2+1;else cout << (k-((n-1)/2+1)-1)*2+2;}else{if(k<=(n-2)/2+1)	cout << (k-1)*2+1;	else	cout << (k-((n-2)/2+1)-1)*2+2;}return 0;}
solve