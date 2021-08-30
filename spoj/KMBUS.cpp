#include<bits/stdc++.h>
using namespace std;

const int MAX = 10005;

int dp[MAX], c[MAX];

int main(){
//  freopen("kmbus.inp", "r", stdin);

  int n, l;
  cin >> n >> l;

  for(int i = 1; i <= n; i++)
    cin >> c[i];

  memset(dp, 0x3f, sizeof(dp));
    //  cout << dp[6];
  dp[0] = 0;

  for(int i = 1; i <= l; i++)
    for(int j = 0; j <= min(i, n); j++)
     dp[i] = min(dp[i], dp[i - j] + c[j]);

  cout << dp[l];

  return 0;
}
