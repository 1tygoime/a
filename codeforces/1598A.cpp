#include<bits/stdc++.h>
using namespace std;

const int N = 105;

char a[N][N];
bool ok[N][N];

int m = 2, n;

bool in(int u, int v){
  return u >= 1 && u <= m && v >= 1 && v <= n;
}

void orz_HuuDuc(){
  memset(ok, false, sizeof(ok));

  cin >> n;

  for(int i = 1; i <= 2; i++)
    for(int j = 1; j <= n; j++)
      cin >> a[i][j];

  ok[1][1] = true;
  queue<pair<int, int>> q;
  q.push({1, 1});

  while(!q.empty()){
    auto [x, y] = q.front();
    q.pop();

    ok[x][y] = true;

    for(int g1 = -1; g1 <= 1; g1++)
      for(int g2 = -1; g2 <= 1; g2++){
        int newx = x + g1, newy = y + g2;
        if(in(newx, newy) && !ok[newx][newy] && a[newx][newy] != '1')
          ok[newx][newy] = true,
          q.push({newx, newy});
      }
  }

  cout << (ok[2][n] ? "YES" : "NO") << '\n';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int t;
  cin >> t;

  while(t--)
    orz_HuuDuc();

  return 0;
}
