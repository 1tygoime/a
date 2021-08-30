#include<bits/stdc++.h>
using namespace std;

struct p{
  int v, l, t;

  bool operator <(const p &x) const {
    if(l != x.l) return l > x.l;
    if(t != x.t) return t > x.t;
    return v > x.v;
  }
};

const int N = 105;
const int M = 10005;

int dp[N][M];
vector<p> adj[N];

void solve(){
  int k, n, r;
  cin >> k >> n >> r;

  for(int i = 1; i <= n; i++) adj[i].clear();

  for(int i = 1; i <= r; i++){
    int s, d, l, t;
    cin >> s >> d >> l >> t;

    adj[s].push_back({d, l, t});
//    adj[d].push_back({s, l, t});
  }

  priority_queue<p> pq;

  memset(dp, 0x3f, sizeof(dp));
  dp[1][0] = 0;

  pq.push({1, 0, 0});

  while(!pq.empty()){
    auto [u, du, m] = pq.top();
    pq.pop();

    if(dp[u][m] != du || m > k) continue;

    for(auto [v, l, t]: adj[u]){
      if(m + t > k) continue;

      if(dp[v][t + m] > dp[u][m] + l)
        dp[v][t + m] = dp[u][m] + l,
        pq.push({v, dp[v][t + m], t + m});
    }
  }

  int res = 0x3f3f3f3f;

  for(int i = 0; i <= k; i++)
    res = min(res, dp[n][i]);

  cout << (res == 0x3f3f3f3f ? -1 : res) << '\n';
}

int main(){
//  freopen("D:\\Code\\Draft\\a.inp", "r", stdin);

  int t;
  for(cin >> t; t--; ) solve();

  return 0;
}
