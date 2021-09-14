#include<bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;

int a[N][N];
pair<int, int> b[N][N], dp[N][N];

pair<int, int> operator + (pair<int, int> a, pair<int, int> b){
  a.first += b.first;
  a.second += b.second;

  return a;
}

pair<int, int> operator - (pair<int, int> a, pair<int, int> b){
  a.first += b.first;
  a.second += b.second;

  return a;
}

int main(){
  int n, m;
  cin >> n >> m;

  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= m; j++){
      cin >> a[i][j];

      int t = a[i][j];
      while(t % 2 == 0)
        b[i][j].first++,
        t /= 2;

      t = a[i][j];
      while(t % 5 == 0)
        b[i][j].second++,
        t /= 5;
    }

//  for(int i = 1; i <= n; i++)
//    for(int j = 1; j <= m; j++)
//      dp[i][j] = min(dp[i - 1][j] + b[i][j], dp[i][j - 1] + b[i][j]);
//
//  cout << min(dp[n][m].first, dp[n][m].second);
}
