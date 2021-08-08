#include<bits/stdc++.h>
using namespace std;

const int MAX = 1005;

vector<pair<int, int>> adj[MAX];
int n, q, d[MAX][MAX];

void dijkstra(int s, int *dist){
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
  for(int i = 1; i <= n; i++) dist[i] = 1e9;
  dist[s] = 0;
  pq.push({0, s});

  while(!pq.empty()){
    auto [du, u] = pq.top(); pq.pop();
    if(dist[u] != du) continue;

    for(const auto &[v, w]: adj[u])
      if(dist[v] - dist[u] > w)
        dist[v] = dist[u] + w,
        pq.push({dist[v], v});
  }
}

int main(){
  cin >> n >> q;
  for(int i = 1; i < n; i++){
    int u, v, w;
    cin >> u >> v >> w;

    adj[u].push_back({v, w});
    adj[v].push_back({u, w});
  }

  for(int i = 1; i <= n; i++)
    dijkstra(i, d[i]);

  while(q--){
    int u, v;
    cin >> u >> v;

    cout << d[u][v] << '\n';
  }
}
