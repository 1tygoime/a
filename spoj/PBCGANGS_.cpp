#include<bits/stdc++.h>
using namespace std;

struct dsu{
  int p[1001];

  void make_set(){
    memset(p, -1, sizeof(p));
  }

  int find_set(int u){
    return p[u] < 0 ? u : p[u] = find_set(p[u]);
  }

  void union_set(int u, int v){
    if((u = find_set(u)) == (v = find_set(v))) return;

    if(p[u] > p[v]) swap(u, v);

    p[u] += p[v];
    p[v] = u;
  }
} d;

int n, m, e[1001];

int main(){
  d.make_set();

  cin >> n >> m;
  for(int i = 1; i <= m; i++){
    char c; int u, v;
    cin >> c >> u >> v;

    if(c == 'F') d.union_set(u, v);
    else{
      if(e[u]) d.union_set(v, e[u]);
      if(e[v]) d.union_set(u, e[v]);
      e[u] = v, e[v] = u;
    }
  }

  cout << count_if(d.p + 1, d.p + 1 + n, [](int i){return i < 0;});
}

