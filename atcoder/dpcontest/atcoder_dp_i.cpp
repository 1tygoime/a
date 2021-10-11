#include <bits/stdc++.h>
using namespace std;

const int N = 3000;

long double p[N];
//i-th items, j upper
long double dp[N][N];

int main(){
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++)
    cin >> p[i];

  dp[0][0] = 1;
  //for(int i = 0; i <= n; i++)
  //	dp[i][0] = 1;

  for (int i = 1; i <= n; i++)
    for (int j = 0; j <= i; j++)
      //upper
      dp[i][j] += (j > 0 ? dp[i - 1][j - 1] : 0) * p[i],

      //lower
      dp[i][j] += dp[i - 1][j] * (1 - p[i]);

  long double res = 0;

  for (int j = n / 2 + 1; j <= n; j++)
    res += dp[n][j];

  cout << setprecision(9) << fixed << res;

  return 0;
}