#include<bits/stdc++.h>
using namespace std;

const int N = 10005;

int num[N], low[N], tr[N], timeDFS, nc[N], bridge, joint, n, m;
bool mark[N], vst[N];
vector<int> adj[N];

void dfs(int u){
  num[u] = low[u] = ++timeDFS;
  nc[u] = 0;
  vst[u] = 1;

  for(int v : adj[u]){
    if(tr[u] == v) continue;
    if(vst[v] == 0){
      tr[v] = u;
      nc[u]++;
      dfs(v);

      low[u] = min(low[u], low[v]);

      bridge += low[v] >= num[v];
//      if(low[v] >= num[v]) cout << v << endl;
      mark[u] = mark[u] || low[v] >= num[u] || (tr[u] == 0 && nc[u] >= 2);
    }
    else low[u] = min(low[u], num[v]);
  }
}

int main(){
  freopen("graph_.inp", "r", stdin);

  int n, m;
  cin >> n >> m;

  for(int i = 1; i <= m; i++){
    int u, v;
    cin >> u >> v;

    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  for(int i = 1; i <= n; i++)
    if(!num[i]){
      dfs(i);
      if(nc[i] < 2)
        mark[i] = false;
    }

  for(int i = 1; i <= n; i++)
      for(int j : adj[i]) cout << i << "->" << j << endl;

  for(int i = 1; i <= n; i++)
    joint += mark[i];


//  cout << timeDFS << endl;
  cout << joint << ' ' << bridge;

  return 0;
}
