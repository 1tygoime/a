#include <bits/stdc++.h>
using namespace std;

const int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

char a[101][101];
int n, m;

bool in(int u, int v){
  return u >= 1 && u <= n && v >= 1 && v <= m;
}

void dfs(int u, int v){
  if(!in(u, v)) return;
  for(int i = 0; i < 8; i++){
    int x = u + dx[i],
        y = v + dy[i];

    if(in(x, y) && a[x][y] == 'W'){
      a[x][y] = '.';
      dfs(x, y);
    }
  }
}

int main(){
  cin >> n >> m;
  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= m; j++) cin >> a[i][j];

  int c = 0;
  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= m; j++)
      if(a[i][j] == 'W'){
        c++;
        a[i][j] = '.';
        dfs(i, j);
      }

  cout << c;

  return 0;
}
