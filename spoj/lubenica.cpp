#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

int h[N];
int f[N][20];
int min_cost[N][20];
int max_cost[N][20];
vector<pair<int, int>> g[N];
bool vst[N];

void dfs(int u){
  vst[u] = 1;

  for(auto [v, w] : g[u])
    if(!vst[v]){
      f[v][0] = u;
      min_cost[v][0] = w;
      max_cost[v][0] = w;
      h[v] = h[u] + 1;
      dfs(v);
    }
}

void query(int u, int v){
  int mn = 1e9, mx = -1e9;

  if(h[v] > h[u])
    swap(u, v);

  for(int i = __lg(h[u]); i >= 0; i--)
    if(h[f[u][i]] >= h[v])
      mn = min(mn, min_cost[u][i]),
      mx = max(mx, max_cost[u][i]),
      u = f[u][i];

  if(u == v){
    cout << mn << ' ' << mx << '\n';
    return;
  }

  for(int i = __lg(h[u]); i >= 0; i--)
    if(f[u][i] != f[v][i]){
      mn = min({mn, min_cost[u][i], min_cost[v][i]});
      mx = max({mx, max_cost[u][i], max_cost[v][i]});

      u = f[u][i]; v = f[v][i];
    }

  mn = min({mn, min_cost[u][0], min_cost[v][0]});
  mx = max({mx, min_cost[u][0], max_cost[v][0]});
  cout << mn << ' ' << mx << '\n';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

//  freopen("lubenica.inp", "r", stdin);

  int n;
  cin >> n;

  for(int i = 2, u, v, c; i <= n; i++){
    cin >> u >> v >> c;

    g[u].push_back({v, c});
    g[v].push_back({u, c});
  }

  memset(min_cost, 0x3f, sizeof(min_cost));
  memset(max_cost, -0x3f, sizeof(max_cost));

  h[1] = 1;
  dfs(1);

  for(int i = 1; i <= 18; i++)
    for(int u = 1; u <= n; u++){
      int p1 = f[u][i - 1];
      int p2 = f[p1][i - 1];

      f[u][i] = p2;
      min_cost[u][i] = min(min_cost[u][i - 1], min_cost[p1][i - 1]);
      max_cost[u][i] = max(max_cost[u][i - 1], max_cost[p1][i - 1]);
    }

  int q;
  cin >> q;

  while(q--){
    int u, v;
    cin >> u >> v;

    query(u, v);
  }

  return 0;
}
