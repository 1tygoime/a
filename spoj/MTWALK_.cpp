#include<bits/stdc++.h>
using namespace std;

const int dx[] = {1, 0, -1, 0};
const int dy[] = {0, 1, 0, -1};

int a[101][101], n, ma = -1e9, mi = 1e9;
bool visited[101][101];

bool in(int u, int v){
  return u >= 1 && u <= n && v >= 1 && v <= n;
}

void dfs(int u, int v, int _mi, int _ma){
  if(visited[u][v]) return;
  if(!in(u, v)) return;
  if(a[u][v] < _mi || a[u][v] > _ma) return;

  visited[u][v] = 1;
  if(u == n && v == n) return;

  for(int i = 0; i < 4; i++){
    int x = u + dx[i], y = v + dy[i];

    if(a[x][y] >= _mi && a[x][y] <= _ma) dfs(x, y, _mi, _ma);
  }
}

bool c(int dist){
  for(int i = mi; i <= ma; i++){
    memset(visited, 0, sizeof(visited));
    dfs(1, 1, i, i + dist);

    if(visited[n][n]) return 1;
  }
  return 0;
}

int main(){
  cin >> n;

  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= n; j++)
      cin >> a[i][j],
      ma = max(ma, a[i][j]),
      mi = min(mi, a[i][j]);

  int res = -1;
  //find min distance
  for(int L = 0, R = ma - mi; L <= R; ){
    int M = (L + R) / 2;

    if(c(M)) res = M, R = M - 1;
    else L = M + 1;
  }

  cout << res;

  return 0;
}
