#include <bits/stdc++.h>
using namespace std;
int n, q;
vector<pair<int, int>> g[100001];
int f[100001][18]; // 0-18
int min_dist[100001][18];
int max_dist[100001][18];
int h[100001];
bool done[100001];

void dfs(int u) {
  done[u] = 1;
  for (int i = 0; f[f[u][i]][i]; i++) {
    f[u][i + 1] = f[f[u][i]][i];
    min_dist[u][i + 1] = min(min_dist[u][i], min_dist[f[u][i]][i]);
    max_dist[u][i + 1] = max(max_dist[u][i], max_dist[f[u][i]][i]);
  }
  for (pair<int, int> v : g[u])
    if (!done[v.first]) {
      f[v.first][0] = u;
      min_dist[v.first][0] = v.second;
      max_dist[v.first][0] = v.second;
      h[v.first] = h[u] + 1;
      dfs(v.first);
    }
}

void query(int u, int v) {
  int mi = 1e9;
  int mx = -1e9;

  if (h[v] > h[u])
    swap(u, v);

  {
    int dist = h[u] - h[v];
    while (dist) {
      mi = min(mi, min_dist[u][__lg(dist)]);
      mx = max(mx, max_dist[u][__lg(dist)]);
      u = f[u][__lg(dist)];
      dist = h[u] - h[v];
    }
  }
  // h[u] == h[v]
  // v là tổ tiên của u
  if (u == v) {
    cout << mi << ' ' << mx << '\n';
    return;
  }

  for (int i = __lg(h[u]); i >= 0; i--) {
    if (f[u][i] != f[v][i]) {
      mi = min(mi, min_dist[u][i]);
      mx = max(mx, max_dist[u][i]);
      mi = min(mi, min_dist[v][i]);
      mx = max(mx, max_dist[v][i]);
      u = f[u][i];
      v = f[v][i];
    }
  }

  // f[u][0] == f[v][0]
  mi = min(mi, min_dist[u][0]);
  mx = max(mx, max_dist[u][0]);
  mi = min(mi, min_dist[v][0]);
  mx = max(mx, max_dist[v][0]);
  cout << mi << ' ' << mx << '\n';
  return;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> n;

  for (int i = 2, u, v, c; i <= n; i++) {
    cin >> u >> v >> c;
    g[u].push_back({v, c});
    g[v].push_back({u, c});
  }

  h[1] = 1;
  dfs(1);
  cin >> q;
  for (int i = 1, a, b; i <= q; i++) {
    cin >> a >> b;
    query(a, b);
  }
}
