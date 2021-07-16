#include<bits/stdc++.h>
using namespace std;

#define x first
#define y second

const int dx[] = {-1, -1, -1, +0, +0, +1, +1, +1};
const int dy[] = {-1, +0, +1, -1, +1, -1, +0, +1};

int h[701][701], n, m;
bool visited[701][701], isHill;

bool in(int u, int v){
  return u >= 1 && u <= n && v >= 1 && v <= m;
}

void bfs(int u, int v){
  queue<pair<int, int>> q;
  visited[u][v] = 1; q.push({u, v});

  while(!q.empty()){
    auto t = q.front(); q.pop();

    for(int i = 0; i < 8; i++){
      int xn = t.x + dx[i], yn = t.y + dy[i];

      if(in(xn, yn) && h[xn][yn] > h[t.x][t.y]){
        isHill = 0;
        //return;
      }

      if(in(xn, yn) && !visited[xn][yn] && h[xn][yn] == h[t.x][t.y])
        q.push({xn, yn}),
        visited[xn][yn] = 1;

    }

  }
}

int main(){
  cin >> n >> m;

  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= m; j++) cin >> h[i][j];

  int res = 0;
  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= m; j++)
      if(visited[i][j]) continue;
      else{
        isHill = 1;
        bfs(i, j);
        res += isHill;
      }

  cout << res;
}
