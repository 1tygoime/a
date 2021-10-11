#include<bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;
const int N = 1e5 + 5;

long long dp[N], pre[N];

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int n, k;
  cin >> n >> k;

  dp[0] = 1;
  for(int i = 1, x; i <= n; i++){
    cin >> x;

    pre[0] = dp[0];
    for(int j = 1; j <= k; j++)
      pre[j] = (pre[j - 1] + dp[j]) % MOD;

    for(int j = k; j >= 0; j--)
      dp[j] = (pre[j] - (j >= x + 1 ? pre[j - x - 1] : 0) + MOD) % MOD;
  }

  cout << dp[k];

  return 0;
}
