#include<bits/stdc++.h>
using namespace std;

const int N = 1005;

int a[N], dp[N];
bool g[N][N];

int main(){
  int n;
  cin >> n;

  for(int i = 1; i <= n; i++)
    cin >> a[i],
    dp[i] = 1;

  sort(a + 1, a + 1 + n);

  for(int k = 1; k <= n; k++){
    int i = 1, j = n, s = a[k];
    while(i < j)
      if(a[i] + a[j] > s) --j;
      else if(a[i] + a[j] < s) ++i;
      else{
        int x = a[i], y = a[j];

        while(i < j && a[i] == x)
          g[i][k] = 1,
          ++i;
        while(i <= j && a[j] == y)
          g[j][k] = 1,
          --j;
      }
  }

  for(int i = 2; i <= n; i++)
    for(int j = 1; j < i; j++)
      if(g[j][i])
        dp[i] = max(dp[i], dp[j] + 1);

  cout << *max_element(dp + 1, dp + 1 + n);

  return 0;
}
