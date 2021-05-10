#include <bits/stdc++.h>
using namespace std;

int n, a[1005], dp[1005];

int main() {
  cin >> n;
  for(int i = 0; i < n; i++) cin >> a[i], dp[i] = 1;
  dp[0] = 1;
  for(int i = 1; i < n; i++)
    for(int j = 0; j < i; j++)
      if(a[j] < a[i]) dp[i] = max(dp[i], dp[j] + 1);
//  for(int i = 0; i < n; i++) cout << dp[i] << " ";
  cout << *max_element(dp, dp + n);
}
