#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;

vector<int> adj[N];
int f[N][20], h[N];

void dfs(int u){
  for(int v: adj[u]){
    h[v] = h[u] + 1;
    f[v][0] = u;
    dfs(v);
  }
}

int lca(int u, int v){
  if(h[u] < h[v])
    swap(u, v);

  for(int i = 18; i >= 0; i--)
    if(h[f[u][i]] >= h[v])
      u = f[u][i];

  if(u == v)
    return u;

  for(int i = 18; i >= 0; i--)
    if(f[u][i] != f[v][i])
      u = f[u][i],
      v = f[v][i];

  return f[u][0];
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int n, q;
  cin >> n >> q;

  for(int i = 2, e; i <= n; i++){
    cin >> e;
    adj[e].push_back(i);
  }

  h[1] = 1;
  dfs(1);
  for(int j = 1; j <= 18; j++)
    for(int i = 1; i <= n; i++)
      f[i][j] = f[f[i][j - 1]][j - 1];

  while(q--){
    int u, v;
    cin >> u >> v;
    cout << lca(u, v) << '\n';
  }

  return 0;
}
