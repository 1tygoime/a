#include<bits/stdc++.h>
using namespace std;

int n, m, c;
bool tr[251];
vector<int> adj[251];

void dfs(int u){
  tr[u] = 1;
  for(int v: adj[u])
    if(!tr[v])
      dfs(v);
}

int main(){
  cin >> n >> m;
  for(int i = 1; i <= m; i++){
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  dfs(1);
  for(int i = 1; i <= n; i++){
    c += !tr[i];
    if(!tr[i]) cout << i << '\n';
  }
  if(!c) return !(cout << 0);
}
