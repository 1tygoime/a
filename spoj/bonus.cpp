#include <bits/stdc++.h>
using namespace std;

int a[1001][1001], res = -1;

int main(){
  int n, k;
  cin >> n >> k;
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= n; j++)
      cin >> a[i][j],
      a[i][j] += a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];

  for(int i = k; i <= n; i++)
    for(int j = k; j <= n; j++)
      res = max(res, a[i][j] - a[i - k][j] - a[i][j - k] + a[i - k][j - k]);

  cout << res;
  return 0;
}
