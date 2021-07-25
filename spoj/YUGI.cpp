#include<bits/stdc++.h>
using namespace std;

int n, k, a[201][201], cnt, t[201];

void dfs(int u, int lim){
  t[u] = cnt;
  for(int v = 1; v <= n; v++)
    if(!t[v] && a[u][v] < lim) dfs(v, lim);
}

bool c(int x){
  cnt = 0; memset(t, 0, sizeof(t));

  for(int i = 1; i <= n; i++)
    if(!t[i]){
      ++cnt;
      dfs(i, x);
    }

  return cnt >= k;
}

int main(){
  int L = 0, R = -1e9;

  cin >> n >> k;
  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= n; j++) cin >> a[i][j],
                                R = max(R, a[i][j]);

  int res = 0;

  while(L <= R){
    int M = L + R >> 1;

    if(c(M)) res = M, L = M + 1;
    else R = M - 1;
  }

  cout << res;
}
