#include <bits/stdc++.h>
using namespace std;

long long dp[100001];
int w[1001], v[1001];

int main(){
  int n, m;
  cin >> n >> m;
  for(int i = 1; i <= n; i++)
    cin >> w[i];
  for(int i = 1; i <= n; i++)
    cin >> v[i];
  for(int i = 1; i <= n; i++)
    for(int j = m; j >= w[i]; j--)
      dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
  cout << dp[m];
}

//#include <bits/stdc++.h>
//using namespace std;
//
//int n, x, h[1005], s[1005], dp[1005][100005];
//
//int main(){
//  cin >> n >> x;
//  for(int i = 1; i <= n; i++) cin >> h[i];
//  for(int i = 1; i <= n; i++) cin >> s[i];
//  for(int i = 1; i <= n; i++)
//    for(int j = 1; j <= x; j++){
//      dp[i][j] = dp[i - 1][j];
//      if(j >= h[i]) dp[i][j] = max(dp[i][j], dp[i - 1][j - h[i]] + s[i]);
//    }
//  cout << dp[n][x];
//}
