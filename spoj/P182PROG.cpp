#include <bits/stdc++.h>
using namespace std;

int n, p, c2[201], c5[201];

//so luong so 2 khi chon den so thu i, chon j so, tong so so 5 la k
int dp[2][201][5201];

int main(){
  cin >> n >> p;
  for(int i = 1; i <= n; i++){
    long long x;
    cin >> x;
    for(long long t = x; t % 2 == 0; t /= 2) c2[i]++;
    for(long long t = x; t % 5 == 0; t /= 5) c5[i]++;
  }

  for(int i = 0; i <= 1; i++)
    for(int j = 0; j <= n; j++)
      for(int k = 0; k <= 5200; k++) dp[i][j][k] = -1e9;

  dp[1][1][c5[1]] = c2[1];
  for(int i = 2; i <= n; i++){
    int ii = i % 2;
    dp[ii][1][c5[i]] = c2[i];

    for(int j = 1; j <= min(i, p); j++)
      for(int k = 0; k <= 5200; k++){
        if(k - c5[i] >= 0) dp[ii][j][k] = max(dp[ii][j][k], dp[1 - ii][j - 1][k - c5[i]] + c2[i]);

        dp[ii][j][k] = max(dp[ii][j][k], dp[1 - ii][j][k]);
      }
  }

  int res = 0;
  for(int k = 0; k <= 5200; k++) res = max(res, min(k, dp[n % 2][p][k]));

  cout << res;
}
