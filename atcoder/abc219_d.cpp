#include<bits/stdc++.h>
using namespace std;

const int N = 305;

int dp[N][N][N], a[N], b[N];

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int n, x, y;
  cin >> n >> x >> y;

  for(int i = 1; i <= n; i++)
    cin >> a[i] >> b[i];

  memset(dp, 0x3f, sizeof(dp));
  dp[0][0][0] = 0;

  for(int i = 1; i <= n; i++)
    for(int j = 0; j <= x; j++)
      for(int k = 0; k <= y; k++){
        dp[i][j][k] = min(dp[i][j][k], dp[i - 1][j][k]);

        int new_tako = max(0, j - a[i]);
        int new_taik = max(0, k - b[i]);

        dp[i][j][k] = min(dp[i][j][k], dp[i - 1][new_tako][new_taik] + 1);
      }

  cout << (dp[n][x][y] == 0x3f3f3f3f ? -1 : dp[n][x][y]);

  return 0;
}
