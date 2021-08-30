#include<bits/stdc++.h>
using namespace std;

const int N = 3005;

struct forb{
  int a, b, c;

  bool operator < (const forb &f) const{
    if(a != f.a) return a < f.a;
    if(b != f.b) return b < f.b;
    return c < f.c;
  }
};
set<forb> s;

int d[N][N], //dist from 1 to i, before is j
    tr[N][N];
vector<int> adj[N];

int main(){
  int n, m, k;
  cin >> n >> m >> k;

  for(int i = 1; i <= m; i++){
    int u, v;
    cin >> u >> v;

    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  for(int i = 1; i <= k; i++){
    int a, b, c;
    cin >> a >> b >> c;

    s.insert({a, b, c});
  }

  memset(d, -1, sizeof(d));

  queue<pair<int, int>> q;
  q.push({1, 0});
  d[1][0] = 0;

  while(!q.empty()){
    auto [u, p] = q.front(); q.pop();

    for(int v: adj[u]){
      if(s.count({p, u, v})) continue;
      if(d[v][u] != -1) continue;

      d[v][u] = d[u][p] + 1;
      tr[v][u] = p;
      q.push({v, u});
    }
  }

  int pos = 1;
  for(int i = 1; i <= n; i++){
    if(d[n][i] == -1) continue;

    if(d[n][pos] == -1 || d[n][pos] > d[n][i]) pos = i;
  }

  cout << d[n][pos] << '\n';

  if(d[n][pos] == -1) return 0;

  vector<int> res = {n};
  int pos1 = n;
  while(pos != 1){
    res.push_back(pos);
    int tmp = tr[pos1][pos];

    pos1 = pos, pos = tmp;
  }
  res.push_back(1);

  for(int i = (int)res.size() - 1; i >= 0; i--)
    cout << res[i] << ' ';

  return 0;
}
