#include<bits/stdc++.h>
using namespace std;

struct edge{
  int u, v, w;

  bool operator < (const edge &e) const{
    return w < e.w;
  }
} e[100000];

struct dsu{
  int p[305];

  dsu(){
    memset(p, -1, sizeof(p));
  }

  int find_set(int u){
    return p[u] < 0 ? u : p[u] = find_set(p[u]);
  }

  bool union_set(int u, int v){
    if((u = find_set(u)) == (v = find_set(v))) return 0;

    if(p[v] < p[u]) swap(u, v);

    p[u] += p[v];
    p[v] = u;

    return 1;
  }
} d;

int n, m;

int main(){
  cin >> n;

  for(int i = 1; i <= n; i++){
    e[++m] = {i, 0, 0};
    cin >> e[m].w;
  }

  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= n; j++)
      e[++m] = {i, j, 0},
      cin >> e[m].w;

  sort(e + 1, e + 1 + m);

  long long res = 0;
  for(int i = 1; i <= m; i++)
    if(d.union_set(e[i].u, e[i].v))
      res += e[i].w;

  cout << res;
}
