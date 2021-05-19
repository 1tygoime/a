#include <bits/stdc++.h>
using namespace std;

int dp[201][201], dp1[201][201], dp2[201][201], dp3[201][201], a[201][201];

#define can(x) !a[i][j] || a[i][j] == x
const int MOD = 1e7;

int main(){
  int m, n;
  cin >> m >> n;
  for(int i = 1; i <= m; i++)
    for(int j = 1; j <= n; j++) cin >> a[i][j];

  dp[1][1] = dp1[1][1] = dp2[1][1] = dp3[1][1] = 1;
  for(int i = 1; i <= m; i++)
    for(int j = 1; j <= n; j++){
      if(i == 1 && j == 1) continue;
      if(a[i][j] == -1) continue;

      dp[i][j] = dp[i - 1][j] + dp[i][j - 1];

      if(can(1)) dp1[i][j] = dp1[i - 1][j] + dp1[i][j - 1];
      if(can(2)) dp2[i][j] = dp2[i - 1][j] + dp2[i][j - 1];
      if(can(3)) dp3[i][j] = dp3[i - 1][j] + dp3[i][j - 1];

      dp[i][j] %= MOD, dp1[i][j] %= MOD, dp2[i][j] %= MOD, dp3[i][j] %= MOD;
    }

  int i = m, j = n;

  cout << (dp[i][j] % MOD - dp1[i][j] % MOD - dp2[i][j] % MOD - dp3[i][j] % MOD + MOD) % MOD;
}
