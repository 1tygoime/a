#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
const int N = 1005;
const ld eps = 1e-9;

int x[N], y[N];
bool c[N][N];
vector<pair<int, ld>> adj[N];
ld d[N];

ld dist(int x1, int x2, int y1, int y2){
  return sqrt(1LL * (x1 - x2) * (x1 - x2) + 1LL * (y1 - y2) * (y1 - y2));
}

int main(){
  int n, w;
  cin >> n >> w;

  ld m;
  cin >> m;

  for(int i = 1; i <= n; i++)
    cin >> x[i] >> y[i];

  for(int i = 1; i <= w; i++){
    int u, v;
    cin >> u >> v;

    c[u][v] = 1;
    c[v][u] = 1;
  }

  for(int u = 1; u <= n; u++)
    for(int v = u + 1; v <= n; v++)
      if(c[u][v])
        adj[u].push_back({v, 0}),
        adj[v].push_back({u, 0});

      else if(dist(x[u], x[v], y[u], y[v]) <= m + eps)
        adj[u].push_back({v, dist(x[u], x[v], y[u], y[v])}),
        adj[v].push_back({u, dist(x[u], x[v], y[u], y[v])});

  priority_queue<pair<ld, int>, vector<pair<ld, int>>, greater<pair<ld, int>>> pq;

  for(int i = 0; i <= n; i++)
    d[i] = 1e9;

  d[1] = 0;
  pq.push({0, 1});

  while(!pq.empty()){
    auto [du, u] = pq.top();
    pq.pop();

    if(abs(d[u] - du) > eps) continue;

    for(auto [v, w]: adj[u])
      if(d[v] - d[u] > w + eps){
        d[v] = d[u] + w,
        pq.push({d[v], v});
      }
  }

  if(abs(d[n] - 1e9) < eps) cout << -1;
  else cout << (long long)(d[n] * 1000);

  return 0;
}
