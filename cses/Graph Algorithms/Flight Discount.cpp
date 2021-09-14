#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

struct state{
  //vertex, cost, discount;
  int v; long long c;
  bool d;

  bool operator <(const state &s) const {
    if(c != s.c) return c > s.c;
    if(d != s.d) return d > s.d;
    return v > s.v;
  }
};

vector<pair<int, int>> adj[N];
long long dp[N][2];

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int n, m;
  cin >> n >> m;

  while(m--){
    int u, v, c;
    cin >> u >> v >> c;

    adj[u].push_back({v, c});
//    adj[v].push_back({u, c});
  }

  priority_queue<state> pq;

  for(int i = 1; i <= n; i++)
    dp[i][0] = dp[i][1] = 1e18;
  dp[1][0] = 0;
  pq.push({1, 0, 0});

  while(!pq.empty()){
    auto [u, du, d] = pq.top();
    pq.pop();

    if(dp[u][d] != du) continue;

    for(auto [v, w] : adj[u]){
      //dont use discount
      if(dp[v][d] - dp[u][d] > w)
        dp[v][d] = dp[u][d] + w,
        pq.push({v, dp[v][d], d});

      //use
      if(d == 0)
        if(dp[v][d + 1] - dp[u][d] > w / 2)
          dp[v][d + 1] = dp[u][d] + w / 2,
          pq.push({v, dp[v][d + 1], d + 1});

    }
  }

  cout << min(dp[n][0], dp[n][1]);

  return 0;
}
