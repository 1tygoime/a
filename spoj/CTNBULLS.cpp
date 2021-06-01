#include <bits/stdc++.h>
using namespace std;

const int MOD = 2111992;

int dp[100005], n, k;

int main(){
  cin >> n >> k;
  for(int i = 1; i <= k + 1; i++) dp[i] = i + 1;
  for(int i = k + 2; i <= n; i++) dp[i] = (dp[i - 1] % MOD + dp[i - k - 1] % MOD) % MOD;
  cout << dp[n];
}
