#include<bits/stdc++.h>
using namespace std;

const int N = 501;

string dp[N][N];
int a[N][N];

string maximum(string a, string b){
  if(a.size() != b.size())
    return a.size() > b.size() ? a : b;

  return max(a, b);
}

int main(){
  int m, n;
  cin >> m >> n;

  for(int i = 1; i <= m; i++)
    for(int j = 1; j <= n; j++)
      cin >> a[i][j];

  for(int i = 1; i <= m; i++)
    for(int j = 1; j <= n; j++)
      if(a[i][j] == 2) dp[i][j] = "";
      else dp[i][j] = maximum(dp[i - 1][j], dp[i][j - 1]) + char(a[i][j] + '0');

  cout << dp[m][n];

  return 0;
}
