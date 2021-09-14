#include<bits/stdc++.h>
using namespace std;

int dist(string need, string ex){
  int cur = 0;
  for(int i = 0; i < need.size(); i++)
    cur += need[i] != ex[i];
  return cur;
}

int main(){
  int n, m, k;
  cin >> n >> m >> k;

  string s;
  cin >> s;
  s += s;

  int res = 1e9;
  while(k--){
    string s1;
    cin >> s1;

    for(int i = 0; i < n; i++){
      string now = s.substr(i, m);

      res = min(res, dist(now, s1));
    }
  }

  cout << res;
}
