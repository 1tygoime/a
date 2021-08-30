#include<bits/stdc++.h>
using namespace std;

int a[101][101], dp[101][101];

int main(){
  int n, x;
  cin >> n >> x;

  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= x; j++) cin >> a[i][j];

  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= x; j++){
      dp[i][j] = dp[i - 1][j];
      for(int k = 1; k <= j; k++){
        //study i-th subject in k days
        dp[i][j] = max(dp[i][j], dp[i - 1][j - k] + a[i][k]);
      }
    }

  cout << *max_element(dp[n] + 1, dp[n] + x + 1);
}
