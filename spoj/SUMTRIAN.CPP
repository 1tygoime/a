#include <bits/stdc++.h>
using namespace std;
 
int a[101][101], dp[101][101];
 
void solve(){
  int n;
  cin >> n;
  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= i; j++) cin >> a[i][j];
  for(int i = 0; i <= n; i++) for(int j = 0; j <= n; j++) dp[i][j] = -1e9;
  dp[1][1] = a[1][1];
  for(int i = 2; i <= n; i++)
    for(int j = 1; j <= i; j++) dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + a[i][j];
  int res = -1e9;
  for(int i = 1; i <= n; i++) res=max(res,dp[n][i]);
  cout << res << '\n';
}
 
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
 
  int t;
  for(cin >> t; t--; )solve();
  return 0;
}
 