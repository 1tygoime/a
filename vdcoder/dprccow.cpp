//#include<bits/stdc++.h>
//using namespace std;
//
//const int MAX = 5005;
//
//int a[MAX], b[MAX];
//long long dp[MAX][MAX];
//
//int main(){
//  int n, m;
//  cin >> n >> m;
//
//  for(int i = 1; i <= n; i++) cin >> a[i];
//  for(int i = 1; i <= m; i++) cin >> b[i];
//
//  for(int i = 0; i <= n + 1; i++)
//    for(int j = 0; j <= m + 1; j++) dp[i][j] = 1e18;
//
//  dp[0][0] = 0;
//
//  for(int i = 1; i <= n; i++)
//    for(int j = 1; j <= m; j++)
//      dp[i][j] = min({dp[i][j], dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1] + abs(a[i] - b[j])});
////      cerr<<dp[i][j]<<endl;
//
//  for(int i = 1; i <= n; i++)
//    for(int j = 1; j <= m; j++)
//      cout << dp[i][j] << " \n"[j == m];
//
//  return 0;
//}
