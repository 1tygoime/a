#include<bits/stdc++.h>
using namespace std;

struct dsu{
  int p[1001];

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
} d1, d2;

int main(){
  int n, m1, m2;

  cin >> n >> m1 >> m2;

  for(int i = 1; i <= m1; i++){
    int u, v;
    cin >> u >> v;
    d1.union_set(u, v);
  }

  for(int i = 1; i <= m2; i++){
    int u, v;
    cin >> u >> v;
    d2.union_set(u, v);
  }

  vector<pair<int, int>> r;
  for(int i = 1; i <= n; i++)
    for(int j = i + 1; j <= n; j++){

      if(d1.find_set(i) == d1.find_set(j)) continue;
      if(d2.find_set(i) == d2.find_set(j)) continue;

      d1.union_set(i, j);
      d2.union_set(i, j);
      r.push_back({i, j});
    }

  cout << r.size() << '\n';
  for(auto [u, v] : r) cout << u << ' ' << v << '\n';
  return 0;
}
