#include<bits/stdc++.h>
using namespace std;

const int N = 30005;
typedef pair<long long, int> Node;

long long d1[N], d2[N], c1[N], c2[N];
vector<pair<int, int>> a[N];
int n, m;

void ijk(int s, long long *d, long long *c){
  priority_queue<Node, vector<Node>, greater<Node>> pq;
  for(int i = 0; i <= n; i++)
    d[i] = 1e9;
  d[s] = 0, c[s] = 1;
  pq.push({0, s});

  while(!pq.empty()){
    auto [du, u] = pq.top();
    pq.pop();

    if(d[u] != du) continue;

    for(auto [v, w]: a[u])
      if(d[v] - d[u] > w)
        d[v] = d[u] + w,
        c[v] = c[u],
        pq.push({d[v], v});
      else if(d[v] == d[u] + w)
        c[v] += c[u];
  }
}

int main(){
  cin >> n >> m;

  while(m--){
    int u, v, c;
    cin >> u >> v >> c;

    a[u].push_back({v, c});
    a[v].push_back({u, c});
  }

  ijk(1, d1, c1);
  ijk(n, d2, c2);

  vector<int> res;
  for(int i = 1; i <= n; i++)
    if(d1[i] + d2[i] > d1[n] || c1[i] * c2[i] < c1[n])
      res.push_back(i);

  cout << res.size() << '\n';
  for(int i: res) cout << i << '\n';

  return 0;
}
