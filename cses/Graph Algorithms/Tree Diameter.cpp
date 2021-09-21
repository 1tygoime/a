#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;

int res = -1e9, h[N];
vector<int> g[N];
bool vst[N];

void dfs(int u){
  vst[u] = 1;

  for(int v: g[u])
    if(!vst[v]){
      dfs(v);
      res = max(res, h[u] + h[v] + 1);
      h[u] = max(h[u], h[v] + 1);
    }
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int n;
  cin >> n;

  for(int i = 2; i <= n; i++){
    int u, v;
    cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }

  dfs(1);

  cout << max(res, h[1]);

  return 0;
}
