#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

struct edge {
  int u, v, c;

  bool operator < (const edge &e) {
    return c < e.c;
  }
} e[2 * N];

int p[N];

int find_set(int u){
  return p[u] < 0 ? u : p[u] = find_set(p[u]);
}

bool union_set(int u, int v){
  u = find_set(u);
  v = find_set(v);

  if(u == v)
    return 0;

  if(p[u] > p[v])
    swap(u, v);

  p[u] += p[v];
  p[v] = u;

  return 1;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  memset(p, -1, sizeof(p));

  int n, m;
  cin >> n >> m;

  for(int i = 1; i <= m; i++)
    cin >> e[i].u >> e[i].v >> e[i].c;

  sort(e + 1, e + 1 + m);

  long long res = 0;
  for(int i = 1; i <= m; i++)
    if(union_set(e[i].u, e[i].v))
      res += e[i].c;

  for(int i = 1; i <= n; i++)
    if(p[i] == -n)
      return cout << res, 0;

  cout << "IMPOSSIBLE";
  return 0;
}
