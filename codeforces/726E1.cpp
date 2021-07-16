#include <bits/stdc++.h>
using namespace std;

int n, k; string s;

string get(string x){
  while(x.size() < k) x += x;
  return x.substr(0, k);
}


void solve(){
  cin >> n >> k >> s;

  string t = "", res = "";
  for(int i = 0; i < n; i++){
    if(s[i] > s[0]) break;

    t += s[i];
    res = (res == "" ? get(t) : min(res, get(t)));
  }

  cout << res;
}

int main(){
  solve();

  return 0;
}
