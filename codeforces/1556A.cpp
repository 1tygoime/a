#include<bits/stdc++.h>
using namespace std;

int res = 1e9;

void solve(){
  res = 1e9;
  int c, d;
  cin >> c >> d;

  if(c % 2 != d % 2){
    cout << -1 << '\n';
    return;
  }

  if(c == 0 && d == 0){
    cout << 0 << '\n';
    return;
  }

  if(c == d){
    cout << 1 << '\n';
    return;
  }

  cout << 2 << '\n';
}

int main(){
  int t;
  for(cin >> t; t--; ) solve();
}
