#include <bits/stdc++.h>
using namespace std;

int dp[105][105], m, n;
string s1, s2;
set <string> lcs;
map <string, bool> ok[105][105];

void trace(int i, int j, string s){
  if(ok[i][j].count(s)) return;
  if(!i || !j){
    lcs.insert(s);
    return;
  }
  if(s1[i] == s2[j]){
    trace(i - 1, j - 1, s1[i] + s);
    return;
  }
  if(dp[i][j - 1] > dp[i - 1][j]){
    trace(i, j - 1, s);
    return;
  }
  if(dp[i - 1][j] > dp[i][j - 1]){
    trace(i - 1, j, s);
    return;
  }
  trace(i, j - 1, s);
  trace(i - 1, j, s);
  ok[i][j][s] = 1;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> s1 >> s2;
  int m = s1.size(), n = s2.size();
  s1 = ' ' + s1, s2 = ' ' + s2;

//  for(int i = 0; i < 101; i++) for(int j = 0; j < 101; j++) s[i][j] = {""};

  for(int i = 1; i <= m; i++)
    for(int j = 1; j <= n; j++)
      if(s1[i] == s2[j]) dp[i][j] = dp[i - 1][j - 1] + 1;
      else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);

  trace(m, n, "");
  cout << lcs.size() << '\n';
  for(const string &s : lcs) cout << s << '\n';

  return 0;
}
