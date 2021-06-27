#include<bits/stdc++.h>
using namespace std;

int a[105][105], m, n;

int main(){
  cin >> m >> n;
  for(int i = 1; i <= m; i++)
    for(int j = 1; j <= n; j++) cin >> a[i][j];

  vector<pair<int,int>> v;
  for(int i = 1; i <= m - 2; i++)
    for(int j = 1; j <= n - 2; j++)
      if(a[i][j]){
        for(int x = 0; x < 3; x++) for(int y = 0; y < 3; y++) a[i + x][j + y] = !a[i + x][j + y];
        v.push_back({i, j});
      }

  for(int i = 1; i <= m; i++) for(int j = 1; j <= n; j++)
    if(a[i][j]) return !(cout << -1);

  cout << v.size() << '\n';
  for(const auto &[x, y] : v) cout << x << ' ' << y << '\n';
}
