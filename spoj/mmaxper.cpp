#include<bits/stdc++.h>
using namespace std;

const int MAX = 1005;

int a[MAX], b[MAX], dp[MAX][2];

int main(){
  int n;
  cin >> n;

  for(int i = 1; i <= n; i++)
    cin >> a[i] >> b[i];

  for(int i = 1; i <= n; i++)
    //{a[i], b[i]}
    dp[i][0] = a[i] + max(dp[i - 1][0] + abs(b[i] - b[i - 1]), dp[i - 1][1] + abs(b[i] - a[i - 1])),

    //{b[i], a[i]}
    dp[i][1] = b[i] + max(dp[i - 1][0] + abs(a[i] - a[i - 1]), dp[i - 1][1] + abs(a[i] - b[i - 1]));

  cout << max(dp[n][0], dp[n][1]);
}
