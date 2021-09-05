#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
const int N = 1005;
const int K = 15;
const ld eps = 1e-9;

vector<pair<int, int>> adj[N];
ld dp[N][K];

struct edge{
  //vertex, distance, count
  int v;
  ld d;
  int c;

  bool operator < (const edge &e) const {
    return d > e.d;
  }
};

int main(){
  freopen("D:\\Code\\Draft\\a.inp", "r", stdin);

  int n, m, k;
  cin >> n >> m >> k;

  for(int i = 1, u, v, c; i <= m; i++){
    cin >> u >> v >> c;

    adj[u].push_back({v, c});
    adj[v].push_back({u, c});
  }

  for(int i = 0; i <= n; i++)
    for(int j = 0; j <= k; j++)
      dp[i][j] = 1e9;
  dp[1][0] = 0;

  priority_queue<edge> pq;
  pq.push({1, 0, 0});

  while(!pq.empty()){
    auto [u, d, c] = pq.top();
    pq.pop();

//    cout << u << ' ' << d << ' ' << c << endl;

    if(dp[u][c] != d) continue;

//    cout << u << endl;

    for(auto [v, w] : adj[u])
      for(int i = c; i <= k; i++)
        if(dp[v][i] > dp[u][c] + 1.0 * w / (1LL << (i - c)) + eps)
          dp[v][i] = dp[u][c] + 1.0 * w / (1LL << (i - c)),
          pq.push({v, dp[v][i], i});
  }

  ld res = 1e9;
  for(int i = 1; i <= k; i++)
//    cout << dp[n][i] << endl,
    res = min(res, dp[n][i]);

  cout << setprecision(2) << fixed << res;

  return 0;
}
