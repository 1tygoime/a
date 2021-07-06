#include<bits/stdc++.h>
using namespace std;

const int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

bool visited[701][701], ok;
int n, m, a[701][701], res;

bool in(int u, int v){
  return u >= 1 && u <= n && v >= 1 && v <= m;
}

void dfs(int u, int v){
  visited[u][v] = 1;

  for(int i = 0; i < 8; i++){
    int x = u + dx[i], y = v + dy[i];

    if(in(x, y) && a[x][y] > a[u][v]) ok = 0;

    if(in(x, y) && !visited[x][y] && a[x][y] == a[u][v]) dfs(x, y);
  }
}

int main(){
  cin >> n >> m;
  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= m; j++) cin >> a[i][j];

  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= m; j++)
      if(visited[i][j]) continue;
      else{
        ok = 1;
        dfs(i, j);
        res += ok;
      }

  cout << res;
  return 0;
}
