#include <bits/stdc++.h>
using namespace std;

int a[2001], dp[2001][2001], k[2001][2001], c[2001][2001], n;

int main(){
  cin >> n;
  for(int i = 1; i <= n; i++) cin >> a[i], a[i] += a[i - 1];
  for(int i = 1; i <= n; i++)
    for(int j = i; j <= n; j++) c[i][j] = a[j] - a[i - 1];
//  for(int i = 1; i <= n; i++) for(int j = i; j <= n; j++) cout << c[i][j] << '\n';
  for(int i = 1; i <= n; i++) k[i][i] = i;

  for(int len = 2; len <= n; len++)
    for(int i = 1; i <= n - len + 1; i++){
      int j = i + len - 1;
      dp[i][j] = 1e9;
//      cout << len << ' ' << i << ' ' << j << ' ' << c[i][j] << '\n';
//      cout << c[i][j] << '\n';
      for(int t = k[i][j - 1]; t <= k[i + 1][j]; t++){
        int val = c[i][j] + dp[i][t - 1] + dp[t][j];
//        cout << val << '\n';
        if(val < dp[i][j]) dp[i][j] = val, k[i][j] = t;
      }
    }
  cout << dp[1][n];
  return 0;
}