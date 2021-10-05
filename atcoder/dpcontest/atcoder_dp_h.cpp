#include<bits/stdc++.h>
using namespace std;

const int N = 1005;
const int MOD = 1e9 + 7;

int dp[N][N];

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int h, w;
  cin >> h >> w;

  dp[0][1] = 1;
  for(int i = 1; i <= h; i++)
    for(int j = 1; j <= w; j++){
      char c;
      cin >> c;
      if(c == '#')
        continue;

      dp[i][j] = (dp[i][j - 1] + dp[i - 1][j]) % MOD;
    }

  cout << dp[h][w];
  return 0;
}
