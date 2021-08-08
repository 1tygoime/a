#include<bits/stdc++.h>
using namespace std;

const int MAX = 101;

int n, m, k, c[MAX][MAX], tr[MAX][MAX];

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  cin >> n >> m >> k;
  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= n; j++)
      c[i][j] = (i == j ? 0: 1e9),
      tr[i][j] = j, tr[j][i] = i;

  for(int i = 1, u, v; i <= m; i++) {
    cin >> u >> v >> c[u][v];
    c[v][u] = c[u][v];
  }

  for(int k = 1; k <= n; k++)
    for(int i = 1; i <= n; i++)
      for(int j = 1; j <= n; j++)
        if(c[i][j] - c[i][k] > c[k][j])
          c[i][j] = c[i][k] + c[k][j],
          tr[i][j] = tr[i][k];

  while(k--){
    int x, u, v;
    cin >> x >> u >> v;

    if(x == 0) cout << (c[u][v] == 1e9 ? -1 : c[u][v]);
    else {
      vector<int> res;
      while(u != v)
        res.push_back(u),
        u = tr[u][v];

      cout << res.size() + 1 << ' ';
      for(int i: res) cout << i << ' ';
      cout << v;
    }

    cout << '\n';
  }

  return 0;
}
