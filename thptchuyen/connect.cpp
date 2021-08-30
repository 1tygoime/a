#include<bits/stdc++.h>
using namespace std;

int p[100005];

int find_set(int u){
  return p[u] < 0 ? u : p[u] = find_set(p[u]);
}

bool union_set(int u, int v){
  u = find_set(u);
  v = find_set(v);

  if(u == v) return 0;

  p[u] += p[v];
  p[v] = u;
  return 1;
}

int main(){
  memset(p, -1, sizeof(p));

  int n, m;
  cin >> n >> m;

  int res = 0;
  for(int i = 1; i <= m; i++){
    int u, v;
    cin >> u >> v;

    if(union_set(u, v)) res = i;

  }

  if(count_if(p + 1, p + 1 + n, [](int i){return i < 0;}) != 1) cout << "FAILURE";
  else cout << res;
}

