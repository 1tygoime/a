#include <bits/stdc++.h>
using namespace std;

long long dp[25001];

int main(){
  int n;
  cin >> n >> dp[2] >> dp[3];
  dp[3] += dp[2];

  for(int i = 4; i <= n; i++){
    cin >> dp[i];
    dp[i] += min(dp[i - 1], // noi voi cac may truoc
                 dp[i - 2]);// i + (i - 1)
  }

  cout << dp[n];
}
