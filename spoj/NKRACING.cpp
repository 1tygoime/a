#include<bits/stdc++.h>
using namespace std;

struct edge{
  int u, v, w;

  bool operator <(const edge &e) const{
    return w > e.w;
  }
} edges[100001];

struct dsu{
  int p[10001];

  dsu() {
    memset(p, -1, sizeof(p));
  }

  int find_set(int u){
    return p[u] < 0 ? u : p[u] = find_set(p[u]);
  }

  bool union_set(int u, int v){
    if((u = find_set(u)) == (v = find_set(v))) return 0;

    if(p[u] > p[v]) swap(u, v);

    p[u] += p[v], p[v] = u;
    return 1;
  }

} d;

int n, m, res;

int main(){
  cin >> n >> m;
  for(int i = 1; i <= m; i++)
    cin >> edges[i].u >> edges[i].v >> edges[i].w,
    res += edges[i].w;

  sort(edges + 1, edges + 1 + m);

  for(int i = 1; i <= m; i++)
    if(d.union_set(edges[i].u, edges[i].v))
      res -= edges[i].w;

  cout << res;
}
