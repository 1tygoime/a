//https://oj.vnoi.info/contest/atcoder_dp/ranking/
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

int dp[N], a[N];

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int n;
  cin >> n;

  for(int i = 1; i <= n; i++)
    cin >> a[i];

  memset(dp, 0x3f, sizeof(dp));
  dp[1] = 0;

  for(int i = 2; i <= n; i++)
    for(int j = 1; j <= 2; j++)
      if(i - j >= 0)
        dp[i] = min(dp[i], dp[i - j] + abs(a[i] - a[i - j]));

  cout << dp[n];

  return 0;
}
