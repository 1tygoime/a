#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

vector<int> g[N];
int dp[N];

void dfs(int u){
  if(dp[u])
    return;

  for(int v: g[u]){
    dfs(v);
    dp[u] = max(dp[u], dp[v] + 1);
  }
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int n, m;
  cin >> n >> m;

  while(m--){
    int u, v;
    cin >> u >> v;
    g[u].push_back(v);
  }

  for(int i = 1; i <= n; i++)
    if(!dp[i])
      dfs(i);

  cout << *max_element(dp + 1, dp + 1 + n);

  return 0;
}
