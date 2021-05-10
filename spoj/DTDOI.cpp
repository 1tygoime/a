#include <bits/stdc++.h>
using namespace std;

int dp[1000005], n, a[101], res, s;

int main(){
  cin >> n >> s;
  for(int i = 1; i <= n; i++) cin >> a[i];
  sort(a + 1, a + 1 + n);
  if(s > 1000000){
    res = (s - 1000000) / a[n];
    s -= a[n] * res;
  }
  for(int i = 1; i <= s; i++) dp[i] = 1e9;
  for(int i = 1; i <= s; i++)
    for(int j = 1; j <= n; j++) if(i >= a[j]) dp[i] = min(dp[i], dp[i - a[j]] + 1);
//  cout << dp[s] << "\n";
  cout << res + dp[s];
  return 0;
}
