#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> adj[101];
int n, m, k, tr[101], d[101];

void dijkstra(int s, int t, int x){
  memset(d, 0x3f, sizeof(d));
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

  tr[s] = s;
  d[s] = 0;

  pq.push({0, s});

  while(!pq.empty()){
    int du = pq.top().first, u = pq.top().second;
    pq.pop();
    if(d[u] != du) continue;
    for(auto i: adj[u]){
      int v = i.first, w = i.second;

      if(d[v] > d[u] + w)
        d[v] = d[u] + w,
        tr[v] = u,
        pq.push({d[v], v});
    }
  }

  if(x == 0){
    cout << (d[t] == 0x3f3f3f3f ? -1 : d[t]);
    return;
  }

  stack<int> st;
  while(t != s){
    st.push(t);
    t = tr[t];
  }

  cout << st.size() + 1 << ' ' << s << ' ';
  while(!st.empty())
    cout << st.top() << ' ',
    st.pop();
}

int main(){
  cin >> n >> m >> k;

  for(int i = 1; i <= m; i++){
    int u, v, w;
    cin >> u >> v >> w;
    adj[u].push_back({v, w});
    adj[v].push_back({u, w});
  }

  while(k--){
    int x, u, v;
    cin >> x >> u >> v;

    dijkstra(u, v, x); cout << '\n';
  }
}

