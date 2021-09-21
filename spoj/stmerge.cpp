#include<bits/stdc++.h>
using namespace std;

const int N = 1005;

long long dp[N][N][2];
int c[N][N];

void solve(){
  int m, n;
  cin >> m >> n;

  for(int i = 1; i <= m; i++)
    for(int j = 1; j <= n; j++)
      cin >> c[i][j];

  for(int i = 0; i <= m; i++)
    for(int j = 0; j <= n; j++)
      for(int k = 0; k <= 1; k++)
        dp[i][j][k] = 1e18;

  for(int i = 0; i <= m; i++)
    dp[i][0][0] = 0;

  for(int i = 0; i <= n; i++)
    dp[0][i][1] = 0;

  for(int i = 1; i <= m; i++)
    for(int j = 1; j <= n; j++){
      //pick x[i]
      dp[i][j][0] = min(dp[i - 1][j][0], dp[i - 1][j][1] + c[i][j]);

      //pick y[j]
      dp[i][j][1] = min(dp[i][j - 1][1], dp[i][j - 1][0] + c[i][j]);
    }

  cout << min(dp[m][n][0], dp[m][n][1]) << '\n';
}

int main(){
  int t;
  cin >> t;

  while(t--)
    solve();

  return 0;
}
