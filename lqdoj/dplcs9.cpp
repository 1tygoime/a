#include <bits/stdc++.h>
using namespace std;

int dp[1001][1001];

void solve(){
  string s1, s2;
  cin >> s1 >> s2;
  int m = s1.size(), n = s2.size();
  s1 = ' ' + s1, s2 = ' ' + s2;

  for(int i = 1; i <= m; i++) for(int j = 1; j <= n; j++) dp[i][j] = -1e9;

  for(int i = 1; i <= m; i++)
    for(int j = 1; j <= n; j++){
      if(s1[i] == s2[j]) dp[i][j] = (i == 1 || j == 1 ? 1 : 1 + dp[i - 2][j - 2]);
      else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
    }

  cout << dp[m][n] << '\n';
}

int main(){
  int t;
  for(cin >> t; t--; ) solve();
  return 0;
}
