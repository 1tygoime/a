#include<bits/stdc++.h>
using namespace std;

int n, m, c[101][101], a[10001];

int main(){
  cin >> n >> m;
  for(int i = 1; i <= m; i++) cin >> a[i];
  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= n; j++) cin >> c[i][j];

  for(int k = 1; k <= n; k++)
    for(int i = 1; i <= n; i++)
      for(int j = 1; j <= n; j++)
        c[i][j] = min(c[i][j], c[i][k] + c[k][j]);

  int res = 0;
  for(int i = 1; i < m; i++) res += c[a[i]][a[i + 1]];
  cout << res;

  return 0; 
}