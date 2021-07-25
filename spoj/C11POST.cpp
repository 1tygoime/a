#include<bits/stdc++.h>
using namespace std;

#define x first
#define y second

const int dx[] = {+0, -1, +0, +1, -1, +1, -1, +1};
const int dy[] = {-1, +0, +1, +0, -1, -1, +1, +1};
const int MAX = 101;

char a[MAX][MAX]; bool visited[MAX][MAX];
int h[MAX][MAX], m, n, need;
pair<int, int> start;


bool in(int u, int v){
  return u >= 1 && u <= m && v >= 1 && v <= n;
}

bool bfs(int l, int r){
  memset(visited, 0, sizeof(visited));

  queue<pair<int, int>> q;
  q.push({start.x, start.y});
  visited[start.x][start.y] = 1;

  int have = 0;

  while(!q.empty()){
    auto top = q.front(); q.pop();

    if(a[top.x][top.y] == 'K') have++;
    if(have == need) return 1;

    for(int i = 0; i < 8; i++){
      int xp = top.x + dx[i], yp = top.y + dy[i];

      if(in(xp, yp) && !visited[xp][yp] && h[xp][yp] >= l && h[xp][yp] <= r)
        visited[xp][yp] = 1,
        q.push({xp, yp});
    }

  }

  return have == need;
}

int main(){
  cin >> m >> n;

  for(int i = 1; i <= m; i++)
    for(int j = 1; j <= n; j++) {
      cin >> a[i][j];
      need += a[i][j] == 'K';
      if(a[i][j] == 'P') start = {i, j};
    }

  int min_h = 1e9, max_h = -1e9;
  for(int i = 1; i <= m; i++)
    for(int j = 1; j <= n; j++){
      cin >> h[i][j];
      if(a[i][j] == 'K' || a[i][j] == 'P')
        min_h = min(min_h, h[i][j]),
        max_h = max(max_h, h[i][j]);
  }


  int res = 1e9;
  //find range [x, y]

  //find x
  for(int L = 0, R = min_h; L <= R; ){
    int t = -1, M = L + (R - L) / 2; bool f = 0;

    for(int L1 = max_h, R1 = 1e9; L1 <= R1; ){
      int M1 = L1 + (R1 - L1) / 2;

      if(bfs(M, M1))
        f = 1, res = min(res, M1 - M),
        R1 = M1 - 1;
      else L1 = M1 + 1;
    }

    if(f) L = M + 1;
    else R = M - 1;
  }

  cout << res;
}
