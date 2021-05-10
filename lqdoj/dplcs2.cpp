#include <bits/stdc++.h>
using namespace std;

string dp[2][1001];

string maximize(string a, string b){
  if(a.size() != b.size()) return (a.size() > b.size() ? a : b);
  return (a > b ? a : b);
}

int main(){
  string x, y;
  cin >> x >> y;
  int m = x.size(), n = y.size(), k;
  for(int i = 0; i <= m; i++){
    k = i % 2;
    for(int j = 0; j <= n; j++){
      if(!i || !j) dp[k][j] = "";
      else if(x[i - 1] == y[j - 1]){
        if(dp[1 - k][j - 1] == "0") dp[k][j] = x[i - 1];
        else dp[k][j] = dp[1 - k][j - 1] + x[i - 1];
      }
      else dp[k][j] = maximize(dp[k][j - 1], dp[1 - k][j]);
    }
  }
  cout << dp[k][n].size() << '\n';
  cout << "LCS MAX NUMBER is " << (dp[k][n].size() ? dp[k][n] : "NULL");
}
