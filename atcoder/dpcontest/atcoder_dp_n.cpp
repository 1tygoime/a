#include<bits/stdc++.h>
using namespace std;

const int N = 405;

long long dp[N][N];
long long a[N];

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int n;
  cin >> n;

  for(int i = 1; i <= n; i++)
    cin >> a[i],
    a[i] += a[i - 1];

  for(int i = 0; i <= n; i++)
    for(int j = 0; j <= n; j++)
      if(i != j) dp[i][j] = 1e18;

  for(int len = 1; len <= n; len++)
    for(int i = 1; i <= n - len + 1; i++){
      int j = i + len - 1;

      for(int k = i; k < j; k++)
        dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + a[j] - a[i - 1]);
    }

  cout << dp[1][n];

  return 0;
}
