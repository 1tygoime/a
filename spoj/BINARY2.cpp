#include <iostream>
using namespace std;

const long long MOD = 1e9;

long long dp[1000001][2]; int n, k;

int main(){
  cin >> n >> k;

  dp[0][0] = 1, dp[0][1] = 1;
  dp[1][0] = 1, dp[1][1] = 1;
  for(int i = 2; i <= k; i++){
    dp[i][0] = (dp[i - 1][0] + dp[i - 1][1]) % MOD;
    dp[i][1] = dp[i][0];
  }

  for(int i = k + 1; i <= n; i++){
    dp[i][0] = (dp[i - 1][0] + dp[i - 1][1] - dp[i - k - 1][1] + MOD) % MOD;
    dp[i][1] = (dp[i - 1][0] + dp[i - 1][1] - dp[i - k - 1][0] + MOD) % MOD;
  }

  cout << (dp[n][0] + dp[n][1]) % MOD;
}
