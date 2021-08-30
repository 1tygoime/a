#include<bits/stdc++.h>
using namespace std;

#define x first
#define y second
const int N = 505;

long long s[N][N];

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int m, n, k;
  cin >> m >> n >> k;

  for(int i = 1; i <= m; i++)
    for(int j = 1; j <= n; j++)
      cin >> s[i][j],
      s[i][j] += s[i][j - 1];

  int mi = 1e9;
  pair<int, int> p1 = {-1, -1}, p2 = {-1, -1};

  for(int l = 1; l <= n; l++)
    for(int r = l; r <= n; r++){
      long long cur = s[1][r] - s[1][l - 1];

      for(int i = 1, j = 1; i <= n; i++){
        while(j <= n && cur <= k)
          ++j,
          cur += s[j][r] - s[j][l - 1];

        if(cur >= k && (r - l + 1) * (j - i + 1) < mi)
          mi = (r - l + 1) * (j - i + 1),
          p1 = {i, l},
          p2 = {j, r};

        cur -= s[i][r] - s[i][l - 1];
      }
    }

  if(mi == 1e9)
    return cout << -1, 0;

  cout << mi << '\n' << p1.x << ' ' << p1.y << ' ' << p2.x << ' ' << p2.y;

  return 0;
}
