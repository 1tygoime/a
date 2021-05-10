#include <bits/stdc++.h>
using namespace std;

string s1, s2;
int dp[2][10001], k;

int main(){
  cin >> s1 >> s2;
  int m = s1.size(), n = s2.size();

  for(int i = 0; i <= m; i++){
    k = i % 2;
    for(int j = 0; j <= n; j++){
      if(!i || !j) dp[k][j] = 0;
      else if(s1[i - 1] == s2[j - 1]) dp[k][j] = dp[1 - k][j - 1] + 1;
      else dp[k][j] = max(dp[k][j - 1], dp[1 - k][j]);
    }
  }

  cout << dp[k][n];
}