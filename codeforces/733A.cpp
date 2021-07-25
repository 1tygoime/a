#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  for(cin >> t; t--; ){
    string s;
    cin >> s;
    int mx = -1;
    for(int i : s) mx = max(mx, i - '0');
    cout << mx << endl;
  }
}
