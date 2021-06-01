#include <bits/stdc++.h>
using namespace std;

const int MOD = 20071008;

int dp[1001][1001];
string s1, s2;

void solve(){
  memset(dp, 0, sizeof(dp));
  cin >> s1 >> s2;
  int m = s1.size(), n = s2.size();
  s1 = ' ' + s1, s2 = ' ' + s2;

  for(int i = 1; i <= m; i++)
    for(int j = 1; j <= n; j++)
      if(s1[i] == s2[j]) dp[i][j] = (1 + dp[i][j - 1] + dp[i - 1][j]) % MOD;
      else dp[i][j] = (dp[i][j - 1] + dp[i - 1][j] - dp[i - 1][j - 1] + MOD) % MOD;

  cout << dp[m][n] % MOD << '\n';
}

int main(){
  int _;
  for(cin >> _; _--; ) solve();
}
