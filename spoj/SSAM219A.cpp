#include <bits/stdc++.h>
using namespace std;

long long dp[100005];
const long long mod = 1000000007;

void sol(){
  memset(dp, 0, sizeof(dp));
  int n, k;
  cin >> n >> k;
  dp[0] = 1, dp[1] = 1;
  long long s = dp[0] + dp[1];
  for(int i = 2; i <= k; i++)
    dp[i] = s,
    s += dp[i],
    s %= mod;
  for(int i = k + 1; i <= n; i++)
    dp[i] = (2 * dp[i - 1] - dp[i - k - 1] + mod) % mod;
  cout << dp[n] << "\n";
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int T;
  for(cin >> T; T--; ) sol();
  return 0;
}
