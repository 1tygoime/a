#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

int p[N], mx;

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
  mx = max(mx, -p[u]);
  p[v] = u;

  return 1;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  memset(p, -1, sizeof(p));

  int n, m;
  cin >> n >> m;

  int cur = n;
  for(int i = 1; i <= m; i++){
    int u, v;
    cin >> u >> v;

    if(union_set(u, v))
      --cur;

    cout << cur << ' ' << mx << '\n';
  }

  return 0;
}
