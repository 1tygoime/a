#include<bits/stdc++.h>
using namespace std;

const int N = 505;

long long c[N][N];
bool on[N];

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, m, k;
  cin >> n >> m >> k;

  for(int i = 0; i <= n; i++)
    for(int j = 0; j <= n; j++)
      if(i != j) c[i][j] = 1e18;

  while(m--){
    int u, v, w;
    cin >> u >> v >> w;

    c[u][v] = min(c[u][v], 1LL * w);
  }

  while(k--){
    int q;
    cin >> q;

    if(q == 1){
      int k;
      cin >> k;

      if(on[k]) continue;
      on[k] = 1;

      for(int u = 1; u <= n; u++)
        for(int v = 1; v <= n; v++)
          c[u][v] = min(c[u][v], c[u][k] + c[k][v]);
    }

    else{
      int u, v;
      cin >> u >> v;
      cout << (c[u][v] == 1e18 ? -1 : c[u][v]) << '\n';
    }
  }

  return 0;
}
