#include <bits/stdc++.h>
using namespace std;

bool palin[256][256];
int dp[256];

int main(){
  string s;
  cin >> s;
  int n = s.size();
  s = ' ' + s;
  for(int i = 1; i <= n; i++) palin[i][i] = 1;
//  for(int i = 1; i < n; i++) palin[i][i + 1] = s[i] == s[i + 1];
  for(int len = 2; len <= n; len++)
    for(int i = 1; i <= n - len + 1; i++){
      int j = i + len - 1;
      palin[i][j] = (s[i] == s[j] && (j - i == 1 || palin[i + 1][j - 1]));
    }
//  cout << s[5] << ' ' << s[6]<<"\n";
//  cout << palin[4][7] << "\n";
//  return 0;
//  memset(dp, INT_MAX, sizeof(dp));
  fill(dp + 1, dp + 1 + n, INT_MAX);
  for(int i = 1; i <= n; i++){
//    dp[i] = INT_MAX - 10;
    for(int j = 1; j <= i; j++) if(palin[j][i]) dp[i] = min(dp[i], dp[j - 1] + 1);
  }
  cout << dp[n];
  return 0;
}
