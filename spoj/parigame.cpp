#include<bits/stdc++.h>
using namespace std;

const int N = 505;

int s[N][N];
bool dp[N][N];

int get(int u, int v, int x, int y){
  int val = s[x][y] - s[u - 1][y] - s[x][v - 1] + s[u - 1][v - 1];
  val &= 1;
  val = (val + 2) & 1;

  return val;
}

void solve(){
  int n;
  cin >> n;

  memset(s, 0, sizeof(s));
  memset(dp, 0, sizeof(dp));

  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= n; j++)
      cin >> s[i][j],
      s[i][j] &= 1,
      s[i][j] += s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1],
      s[i][j] = (s[i][j] + 2) & 1;

  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= n; j++){
      int currRow = get(i, 1, i, j);
      int currCol = get(1, j, i, j);

      if(dp[i - 1][j] == false && currRow == 0)
        dp[i][j] = true;

      else if(dp[i][j - 1] == false && currCol == 0)
        dp[i][j] = true;
    }

  cout << (dp[n][n] ? "YES\n" : "NO\n");
}

int main(){
  int t;
  cin >> t;

  while(t--)
    solve();
}
