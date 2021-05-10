#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005], n;
string s;

int solve(){
  memset(dp, 0, sizeof(dp));
  cin >> s;
  n = s.size();
  s = ' ' + s;

  for(int len = 1; len <= n; len++){
    for(int i = 1; i <= n - len; i++){
      int j = i + len;
      if(s[i] == s[j]) dp[i][j] = dp[i + 1][j - 1];
      else dp[i][j] = 1 + min({dp[i][j - 1],      // del j-th char
                              dp[i + 1][j],       // del i-th char
                              dp[i + 1][j - 1]}); // replace A[i],A[j]
    }
  }

  return dp[1][n];
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int t;
  cin >> t;
  for(int i = 1; i <= t; i++){
    cout << "Case " << i << ": " << solve() << '\n';
  }
  return 0;
}
