#include <bits/stdc++.h>
using namespace std;

long long dp[35];
int n;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  dp[0] = 1, dp[2] = 3, dp[4] = 11;
  for(int i = 5; i <= 30; i++)
    dp[i] = (i % 2 ? 0 : 4 * dp[i - 2] - dp[i - 4]);

  while(cin >> n){
    if (n == -1) return 0;
    cout << dp[n] << "\n";
  }

  return 0;
}
