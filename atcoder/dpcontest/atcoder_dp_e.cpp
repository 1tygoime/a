//https://oj.vnoi.info/contest/atcoder_dp
#include<bits/stdc++.h>
using namespace std;

const int N = 105;
const int V = 1e3 * N;

long long dp[V];
int w[N];
int v[N];

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int n, W;
  cin >> n >> W;

  for(int i = 1; i <= n; i++)
    cin >> w[i] >> v[i];

  for(int i = 1; i < V; i++)
    dp[i] = 1e18;

  for(int i = 1; i <= n; i++)
    for(int j = V - 1; j >= v[i]; j--)
      dp[j] = min(dp[j], dp[j - v[i]] + w[i]);

  for(int i = V - 1; i >= 0; i--)
    if(dp[i] <= W)
      return cout << i, 0;

  return 0;
}
