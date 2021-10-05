#include<bits/stdc++.h>
using namespace std;

const int N = 3005;

long long dp[N][N];
int a[N];

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int n;
  cin >> n;

  for(int i = 1; i <= n; i++)
    cin >> a[i],
    dp[i][i] = a[i];

  for(int len = 2; len <= n; len++)
    for(int i = 1; i <= n - len + 1; i++){
      int j = i + len - 1;

      dp[i][j] = max(a[i] - dp[i + 1][j], a[j] - dp[i][j - 1]);
    }

  cout << dp[1][n];

  return 0;
}
