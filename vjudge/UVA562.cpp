#include <bits/stdc++.h>
using namespace std;

int n, a[101], sum, dp[50005];

void solve(){
  memset(dp, 0, sizeof(dp));
  sum = 0; dp[0] = 1;
  cin >> n;
  for(int i = 1; i <= n; i++) cin >> a[i], sum += a[i];
  int m = sum / 2;
  for(int i = 1; i <= n; i++)
    for(int j = m; j >= a[i]; j--) if(!dp[j]) dp[j] = dp[j - a[i]];
  for(int j = m; j >= 0; j--) if(dp[j]) {
    cout << abs(sum - j * 2) << '\n';
    return;
  }
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int t;
  for(cin >> t; t--; ) solve();
}
