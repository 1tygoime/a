#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
const int MOD = 1e9 + 7;

long long dp[N][2]; // j = 0: white, black otherwise
vector<int> g[N];

void dfs(int u, int p = -1){
  for(int v: g[u])
    if(v != p){
      dfs(v, u);

      //while -> {black, white}
      dp[u][0] = dp[u][0] * (dp[v][0] + dp[v][1]) % MOD;

      //black -> white
      dp[u][1] = dp[u][1] * dp[v][0] % MOD;
    }
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int n;
  cin >> n;

  for(int i = 1, u, v; i < n; i++){
    cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }

  for(int i = 1; i <= n; i++)
    for(int j = 0; j <= 1; j++)
      dp[i][j] = 1;

  dfs(1);

  cout << (dp[1][0] + dp[1][1]) % MOD;

  return 0;
}
