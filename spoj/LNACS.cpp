#include <bits/stdc++.h>
using namespace std;

int dp[1001][1001], s1[1001], s2[1001], m, n;

void solve(){
  cin >> m >> n;
  for(int i = 1; i <= m; i++) cin >> s1[i];
  for(int i = 1; i <= n; i++) cin >> s2[i];

  for(int i = 1; i <= m; i++) for(int j = 1; j <= n; j++) dp[i][j] = -1e9;

  for(int i = 1; i <= m; i++)
    for(int j = 1; j <= n; j++){
      if(s1[i] == s2[j]) dp[i][j] = (i == 1 || j == 1 ? 1 : 1 + dp[i - 2][j - 2]);
      else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
    }

  cout << dp[m][n] << '\n';
}

int main(){
  solve();
  return 0;
}
