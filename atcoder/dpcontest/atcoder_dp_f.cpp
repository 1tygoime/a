#include<bits/stdc++.h>
using namespace std;

const int N = 3005;

short dp[2][N];
bool tr[N][N];

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  string s, t;
  cin >> s >> t;

  int n = s.size();
  int m = t.size();
  s = ' ' + s;
  t = ' ' + t;

  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= m; j++)
      if(s[i] == t[j])
        dp[i & 1][j] = dp[1 - (i & 1)][j - 1] + 1;
      else
        if(dp[1 - (i & 1)][j] > dp[i & 1][j - 1])
          tr[i][j] = true,
          dp[i & 1][j] = dp[1 - (i & 1)][j];
        else
          dp[i & 1][j] = dp[i & 1][j - 1];
  }

  string res = "";
  while(n > 0 && m > 0)
    if(s[n] == t[m])
      res.push_back(s[n]),
      --n, --m;
    else if(tr[n][m])
      --n;
    else
      --m;

  for(int i = (int)res.size() - 1; i >= 0; i--)
    cout << res[i];

  return 0;
}
