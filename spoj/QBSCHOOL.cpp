#include<bits/stdc++.h>
using namespace std;

#define v first
#define w second

long long dp[5001], c[5001];
int n, m;
vector<pair<int, int>> adj[5001];

int main(){
  cin >> n >> m;

  for(int i = 1; i <= m; i++){
    int k, u, v, l;
    cin >> k >> u >> v >> l;

    adj[u].push_back({v, l});
    if(k == 2) adj[v].push_back({u, l});
  }

  priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;

  memset(dp, 0x3f3f3f3f, sizeof(dp));
  c[1] = 1, dp[1] = 0;

  pq.push({dp[1], 1});

  while(!pq.empty()){
    auto uu = pq.top(); pq.pop();

    int u = uu.second;
    if(uu.first != dp[u]) continue;

    for(auto [v, w]: adj[u]){
      if(dp[v] > dp[u] + w)
        dp[v] = dp[u] + w, c[v] = c[u], pq.push({dp[v], v});
      else if(dp[v] == dp[u] + w) c[v] += c[u];
    }

  }

  cout << dp[n] << ' ' << c[n];
}
