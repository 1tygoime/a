#include <bits/stdc++.h>
using namespace std;

string s;
bool dp[1001][1001];

int main(){
  cin >> s;
  int n = s.size(); s = ' ' + s;

  for(int i = 1; i <= n; i++) dp[i][i] = 1;
  for(int i = 1; i <= n - 1; i++) dp[i][i + 1] = (s[i] == s[i + 1]);
  for(int len = 2; len <= n; len++)
    for(int i = 1; i <= n - len; i++){
      int j = i + len;
      dp[i][j] = (s[i] == s[j] && dp[i + 1][j - 1]); // palin
      for(int p = i + 1; p < j - 1 && !dp[i][j]; p++)
        dp[i][j] |= (dp[i][p] && dp[p + 1][j]); // create from palin
    }

  int res = 0;
  for(int i = 1; i <= n; i++)
    for(int j = i + 1; j <= n; j++) res += dp[i][j];
  cout << res;
}
