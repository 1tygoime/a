#include<bits/stdc++.h>
using namespace std;

#define x first
#define y second

const int dx[] = {+0, -1, +0, +1};
const int dy[] = {-1, +0, +1, +0};

int r, c, cost[101][101], xe, ye;
char a[101][101];

bool in(int u, int v){
  return u >= 1 && u <= r && v >= 1 && v <= c;
}

int main(){
  cin >> r >> c;
  for(int i = 1; i <= r; i++)
    for(int j = 1; j <= c; j++){
      cin >> a[i][j];

      if(a[i][j] == 'B') a[i][j] = '.';

      if(a[i][j] == 'C') xe = i, ye = j;
    }

  queue<pair<int, int>> q; q.push({xe, ye});

  while(!q.empty()){
    auto t = q.front(); q.pop();

    if(t == make_pair(1, 1)) return !(cout << cost[1][1]);

    for(int i = 0; i < 4; i++){
      int xp = t.x + dx[i], yp = t.y + dy[i];

      if(in(xp, yp) && a[xp][yp] == '.')
        q.push({xp, yp}),
        a[xp][yp] = '*',
        cost[xp][yp] = cost[t.x][t.y] + 1;
    }
  }
}
