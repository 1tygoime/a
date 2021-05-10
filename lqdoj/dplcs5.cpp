#include <bits/stdc++.h>
using namespace std;

string s1, s2;
int dp[2][10001];

int main(){
  cin >> s1 >> s2;
  int m = s1.size(), n = s2.size();
  vector < vector <bool> > ok(m + 1, vector<bool>(n + 1, 0)); // ok[i][j] = 1 if dp[i][j] = dp[i - 1][j]
  s1 = ' ' + s1, s2 = ' ' + s2;

  for(int i = 1; i <= m; i++)
    for(int j = 1; j <= n; j++){
      int k = (i + 1) % 2;
      if(s1[i] == s2[j]) dp[k][j] = dp[1 - k][j - 1] + 1;
      else {
        if(dp[1 - k][j] > dp[k][j - 1]) dp[k][j] = dp[1 - k][j], ok[i][j] = 1;
        else dp[k][j] = dp[k][j - 1];
      }
    }

  vector <char> res;
  for(; m && n; ){
    if(s1[m] == s2[n]) res.push_back(s1[m]), m--, n--;
    else if(ok[m][n]) m--;
    else n--;
  }
  for(int i = (int)res.size() - 1; i >= 0; i--) cout << res[i];

  return 0;
}
