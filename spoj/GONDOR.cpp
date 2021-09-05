#include<bits/stdc++.h>
using namespace std;

#define ld long double
const int N = 105;
const ld eps = 1e-9;

vector<int> adj[N];
int x[N], y[N], s[N];
bool ok[N];
ld d[N];

ld dist(int x1, int x2, int y1, int y2){
  return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main(){
  int n;
  cin >> n;

  for(int i = 1; i <= n; i++) {
    cin >> x[i] >> y[i] >> s[i];

    adj[i].resize(n - 1);
    for(int &j: adj[i]) cin >> j;
  }

  for(int i = 0; i <= n; i++) d[i] = 1e9;
  d[1] = 0;

  priority_queue<pair<ld, int>, vector<pair<ld, int>>, greater<pair<ld, int>>> pq;
  pq.push({0, 1});

  while(!pq.empty()){
    auto [du, u] = pq.top();
    pq.pop();

    if(abs(d[u] - du) > eps) continue;

    ok[u] = 1;

    int cur = 0;
    for(int v: adj[u]){
      if(cur == s[u]) break;

      if(ok[v]) continue;
      ++cur;

      if(d[v] - d[u] > dist(x[u], x[v], y[u], y[v]) + eps)
        d[v] = d[u] + dist(x[u], x[v], y[u], y[v]),
//        ++cur,
        pq.push({d[v], v});
    }

  }

  for(int i = 1; i <= n; i++)
    cout << setprecision(6) << fixed << d[i] << '\n';

  return 0;
}
