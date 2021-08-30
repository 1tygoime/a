#include<bits/stdc++.h>
using namespace std;

const int N = 505;

int f[N], d[N][N], n, p, c;
vector<pair<int, int>> adj[N];

void dijkstra(int s, int *dist){
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

  for(int i = 0; i <= p; i++) dist[i] = 1e9;
  dist[s] = 0;
  pq.push({0, s});

  while(!pq.empty()){
    auto [du, u] = pq.top();
    pq.pop();

    if(dist[u] != du) continue;

    for(auto [v, w] : adj[u])
      if(dist[v] - dist[u] > w)
        dist[v] = dist[u] + w,
        pq.push({dist[v], v});
  }
}

int main(){
  cin >> p >> n >> c;

  for(int i = 1; i <= n; i++)
    cin >> f[i];

  for(int i = 1; i <= c; i++){
    int a, b, F;
    cin >> a >> b >> F;

    adj[a].push_back({b, F});
    adj[b].push_back({a, F});
  }

  for(int i = 1; i <= p; i++)
    dijkstra(i, d[i]);

  int mi = 1e9, pos = -1;

  for(int i = 1; i <= p; i++){
    //choose i as start point
    int cur = 0;

    for(int j = 1; j <= n; j++) cur += d[i][f[j]];

    if(mi > cur)
      mi = cur,
      pos = i;
  }

  cout << pos;

  return 0;
}
