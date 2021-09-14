#include<bits/stdc++.h>
using namespace std;

struct robot{
  int x, y, dir;
};

struct state{
  robot x, y;
};

const int dx[] = {-1, 0, 0, 1},
          dy[] = {0, -1, 1, 0};

int m, n;
vector<vector<int>> a;

bool get(robot &r){
  r.x += dx[r.dir], r.y += dy[r.dir];

  if(r.x < 1 || r.x > m || r.y < 1 || r.y > n || a[r.x][r.y]){
    r.x -= dx[r.dir],
    r.y -= dy[r.dir];
    return 0;
  }

  return 1;
}

int main(){
  cin >> m >> n;

  a = vector<vector<int>>(m + 1, vector<int>(n + 1, 0));

  for(int i = 1; i <= m; i++)
    for(int j = 1; j <= n; j++)
      cin >> a[i][j];

  queue<state> q;
  vector<vector<vector<vector<vector<vector<int>>>>>> d(max(m, n) + 1, vector<vector<vector<vector<vector<int>>>>>(max(m, n) + 1, vector<vector<vector<vector<int>>>>(4, vector<vector<vector<int>>> (max(m, n) + 1, vector<vector<int>> (max(m, n) + 1, vector<int> (4, -1))))));

  robot f = {1, 1, 2}, s = {m, n, 1};
  q.push({f, s});

  d[1][1][2][m][n][1] = 0;

  while(!q.empty()){
    f = q.front().x, s = q.front().y;
    q.pop();

    int cur_val = d[f.x][f.y][f.dir][s.x][s.y][s.dir];

    if(f.x == s.x && f.y == s.y)
      return cout << cur_val, 0;

    //A
    if(d[f.x][f.y][(f.dir + 1) % 4][s.x][s.y][(s.dir + 2) % 4] == -1){
      d[f.x][f.y][(f.dir + 1) % 4][s.x][s.y][(s.dir + 2) % 4] = cur_val;
      q.push({ {f.x, f.y, (f.dir + 1) % 4}, {s.x, s.y, (s.dir + 2) % 4} });
    }

    //B
    if(d[f.x][f.y][(f.dir + 2) % 4][s.x][s.y][(s.dir + 1) % 4] == -1){
      d[f.x][f.y][(f.dir + 2) % 4][s.x][s.y][(s.dir + 1) % 4] = cur_val;
      q.push({ {f.x, f.y, (f.dir + 2) % 4}, {s.x, s.y, (s.dir + 1) % 4} });
    }

    //G
    bool can1 = get(f), can2 = get(s);
//    if(!can1 && !can2) continue;

    if(d[f.x][f.y][f.dir][s.x][s.y][s.dir] == -1){
      d[f.x][f.y][f.dir][s.x][s.y][s.dir] = cur_val + 1;
      q.push( { {f.x, f.y, f.dir}, {s.x, s.y, s.dir} } );
    }
  }

//  for(int x = 1; x <= m; x++)
//    for(int y = 1; y <= n; y++)
//      for(int dir = 0; dir < 4; dir++)
//        for(int dir1 = 0; dir1 < 4; dir1++)
//          cout << d[x][y][dir][x][y][dir1] << endl;

  cout << -1;
}
