#include<bits/stdc++.h>
using namespace std;

int dp[2][3];

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int n;
  cin >> n;

  for(int _ = 1; _ <= n; _++){
    int a, b, c;
    cin >> a >> b >> c;

    int i = _ & 1;

    dp[i][0] = max(dp[1 - i][1], dp[1 - i][2]) + a;
    dp[i][1] = max(dp[1 - i][0], dp[1 - i][2]) + b;
    dp[i][2] = max(dp[1 - i][0], dp[1 - i][1]) + c;
  }

  cout << max({dp[n & 1][0], dp[n & 1][1], dp[n & 1][2]});

  return 0;
}
