#include <bits/stdc++.h>
using namespace std;

int n, l, w[6001], dp[6001];

int main(){
  cin >> n >> l;
  for(int i = 1; i <= n; i++) cin >> w[i], w[i] += w[i - 1];

  fill(dp + 1, dp + n + 1, (int)1e9);
  dp[0] = 0;
  for(int i = 1; i <= n; i++)
    for(int j = i - 1; j >= 0 && w[i] - w[j] <= l; --j)
      dp[i] = min(dp[i], max(dp[j], l - w[i] + w[j]));

  cout << dp[n];
  return 0;
}
