#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9;
int dp[101][101], a[101][101], m, n;

int main(){
  cin >> m >> n;
  for(int i = 1; i <= m; i++)
    for(int j = 1; j <= n; j++) cin >> a[i][j];

  for(int i = 1; i <= m; i++) dp[i][1] = 1;
  // nhay tu (p, q) -> (i, j)
  for(int i = 1; i <= m; i++)
    for(int j = 1; j <= n; j++){
      for(int p = 1; p <= i; p++)
        for(int q = 1; q <= j; q++)
          if(p + q < i + j && q < n && __gcd(a[i][j], a[p][q]) > 1) dp[i][j] = (dp[i][j] + dp[p][q]) % mod;
      }

  int res = 0;
  for(int i = 1; i <= m; i++) res = (res + dp[i][n]) % mod;
  cout << res;
  return 0;
}