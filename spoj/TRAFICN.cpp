#include<bits/stdc++.h>
using namespace std;

#define Node pair<int, int>

const int N = 10005;

vector<Node> adj[N], radj[N];
int n;
long long d1[N], d2[N];

void dijkstra(vector<Node> *a, int s, long long *d){
  priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;

  for(int i = 0; i <= n; i++)
    d[i] = 1e18;
  d[s] = 0;
  pq.push({0, s});

  while(!pq.empty()){
    auto [du, u] = pq.top();
    pq.pop();

    if(d[u] != du) continue;

    for(auto [v, w] : a[u])
      if(d[v] - d[u] > w)
        d[v] = d[u] + w,
        pq.push({d[v], v});
  }
}

void solve(){
  int m, k, s, t;
  cin >> n >> m >> k >> s >> t;

  for(int i = 0; i <= n; i++)
    adj[i].clear(),
    radj[i].clear();

  while(m--){
    int u, v, w;
    cin >> u >> v >> w;

    adj[u].push_back({v, w});
    radj[v].push_back({u, w});
  }

  dijkstra(adj, s, d1);
  dijkstra(radj, t, d2);

//  for(int i = 1; i <= n; i++) cout << d1[i] << ' ';
//  cout << endl;
//  for(int i = 1; i <= n; i++) cout << d2[i] << ' ';
//  cout << endl << endl;


  long long res = d1[t];

  while(k--){
    int u, v, w;
    cin >> u >> v >> w;

    res = min({res, d1[u] + w + d2[v], d1[v] + w + d2[u]});
  }

  cout << (res == 1e18 ? -1 : res) << '\n';
}

int main(){
  freopen("D:\\Code\\Draft\\a.inp", "r", stdin);
  int t;
  for(cin >> t; t--; ) solve();

  return 0;
}
