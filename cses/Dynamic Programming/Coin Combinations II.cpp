#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int a[105], n, s, dp[1000005];

int main(){
  cin >> n >> s;
  for(int i = 1; i <= n; i++) cin >> a[i];
  dp[0] = 1;
  for(int i = 1; i <= n; i++)
    for(int j = 0; j <= s; j++)
      if(j >= a[i]) dp[j] += dp[j - a[i]], dp[j] %= MOD;
  cout << dp[s];
}
