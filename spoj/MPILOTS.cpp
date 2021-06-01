#include <bits/stdc++.h>
using namespace std;

int n, x[10001], y[10001];
//int dp[10001][5001]; // chon den nguoi i, co j lai chinh
int dp[5001];

int main(){
  cin >> n;
  for(int i = 1; i <= n; i++) cin >> x[i] >> y[i];

  fill(dp, dp + 5001, 1e9);
  dp[0] = 0;

  for(int i = 1; i <= n; i++){
    for(int j = i / 2; j >= 1; j--)
      dp[j] = min(dp[j - 1] + x[i], dp[j] + y[i]);
    dp[0] += y[i];
  }

  cout << dp[n / 2];

//  for(int i = 0; i <= n; i++) for(int j = 0; j <= n / 2; j++) dp[i][j] = 1e9;
//  dp[0][0] = 0;
//  for(int i = 1; i <= n; i++)
//    for(int j = 0; j <= i / 2; j++){
//      dp[i][j] = dp[i - 1][j] + y[i];
//      if(j) dp[i][j] = min(dp[i - 1][j - 1] + x[i], dp[i][j]);
//    }
//
//  cout << dp[n][n / 2];

  return 0;
}
