#include<bits/stdc++.h>
using namespace std;

const int dx[] = {+0, +0, +1, -1};
const int dy[] = {+1, -1, +0, +0};

int n, m, a[105][105];
bool visited[105][105];

bool in(int u, int v){
  return u >= 1 && u <= n && v >= 1 && v <= m;
}

bool side(int u, int v){
  return u == 1 || u == n || v == 1 || v == m;
}

void dfs(int u, int v, int lim){
  visited[u][v] = 1;

  for(int i = 0; i < 4; i++){
    int x = u + dx[i], y = v + dy[i];

    if(in(x, y) && !visited[x][y] && a[x][y] <= lim)
      dfs(x, y, lim);
  }
}

bool f = 0;

void check(int lim){
  memset(visited, 0, sizeof(visited));

  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= m; j++)
      if(side(i, j) && !visited[i][j] && a[i][j] <= lim)
        dfs(i, j, lim);

  int connected = 0;
  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= m; j++)
      if(!visited[i][j]){
        connected++;
        dfs(i, j, 1e9);
      }


  if(connected > 1){
    f = 1;
    cout << "Island splits when ocean rises " << lim << " feet.\n";
  }
}

void solve(){
  f = 0;

  int limL = 1e9, limR = -1e9;

  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= m; j++)
      cin >> a[i][j],
      limL = min(limL, a[i][j]),
      limR = max(limR, a[i][j]);

  for(; limL <= limR; limL++){
    if(f) break;
    check(limL);
  }

  if(!f) cout << "Island never splits.\n";
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  for(int i = 1; cin >> n >> m; i++){
    if(!n) return 0;
    cout << "Case " << i << ": ";
    solve();
  }

  return 0;
}
