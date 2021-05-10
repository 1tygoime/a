#include <bits/stdc++.h>
using namespace std;

long long dp[100001];
int w[101], v[101];

int main(){
  int n, m;
  cin >> n >> m;
  for(int i = 1; i <= n; i++)
    cin >> w[i] >> v[i];
  for(int i = 1; i <= n; i++)
    for(int j = m; j >= w[i]; j--)
      dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
  cout << dp[m];
}
