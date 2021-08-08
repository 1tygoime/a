#include<bits/stdc++.h>
using namespace std;

const int MAX = 2005;

int n, h, l, r, dp[MAX][MAX];

int main(){
  cin >> n >> h >> l >> r;
  for(int i = 0; i <= n; i++)
    for(int j = 0; j <= h; j++) dp[i][j] = -1e9;
  dp[0][0] = 0;

  for(int i = 1, x; i <= n; i++){
    cin >> x;
    for(int j = 0; j <= h; j++){
      int x1 = (j - x + h) % h;
      int x2 = (j - x + 1 + h) % h;

      dp[i][j] = max(dp[i - 1][x1], dp[i - 1][x2]) + (l <= j && j <= r);
    }
  }

  cout << *max_element(dp[n], dp[n] + h + 1);
}
