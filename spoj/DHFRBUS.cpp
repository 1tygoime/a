#include<bits/stdc++.h>
using namespace std;

struct state{
  // vertex, distance, free
  int v;
  long long d;
  int f;

  bool operator <(const state &s) const{
    if(d != s.d) return d > s.d;
    return f > s.f;
  }
};

const int N = 1e5 + 5;

vector<pair<int, int>> adj[N];
long long dp[N][10];

int main(){
//  freopen("D:\\Code\\Draft\\a.inp", "r", stdin);

  int n, m, k, s, t;
  cin >> n >> m >> k >> s >> t;

  for(int i = 1; i <= m; i++){
    int u, v, w;
    cin >> u >> v >> w;

    adj[u].push_back({v, w});
    adj[v].push_back({u, w});
  }

  priority_queue<state> pq;

  for(int i = 0; i <= n; i++)
    for(int j = 0; j <= k; j++) dp[i][j] = 1e18;

  dp[s][0] = 0;
  pq.push({s, 0, 0});

  while(!pq.empty()){
    auto [u, du, f] = pq.top();
    pq.pop();

    if(dp[u][f] != du) continue;

    for(auto [v, w] : adj[u]){
      if(dp[v][f] - dp[u][f] > w)
        dp[v][f] = dp[u][f] + w,
        pq.push({v, dp[v][f], f});

      if(f >= k) continue;

      if(dp[v][f + 1] > dp[u][f])
        dp[v][f + 1] = dp[u][f],
        pq.push({v, dp[v][f + 1], f + 1});
    }
  }

  cout << *min_element(dp[t], dp[t] + k + 1);

  return 0;
}
