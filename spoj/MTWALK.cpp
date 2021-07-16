#include<bits/stdc++.h>
using namespace std;

const int dx[] = {0, 0, -1, 1};
const int dy[] = {1, -1, 0, 0};

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

int main(){
  cin >> n;

  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= n; j++)
      cin >> a[i][j],
      ma = max(ma, a[i][j]),
      mi = min(mi, a[i][j]);

  int res = ma - mi;

  //find m2
  for(int m1 = mi; m1 <= ma; m1++){

    for(int L = m1, R = ma; L <= R; ){
      int M = (L + R) / 2; // m2

      memset(visited, 0, sizeof(visited));
      dfs(1, 1, m1, M);

      if(visited[n][n]){
        res = min(res, M - m1),
        R = M - 1;
      }
      else L = M + 1;
    }

  }

  cout << res;

  return 0;
}

