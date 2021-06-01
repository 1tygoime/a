#include <bits/stdc++.h>
using namespace std;

int n, k, a[10001], dp[10001];

int main(){
  for(int i = 0; i < 10001; i++) dp[i] = -1e9;
  dp[0] = 0;

  cin >> n >> k;

  for(int i = 1; i <= n; i++){
    cin >> a[i];
    for(int j = max(0, i - k); j < i; j++) dp[i] = max(dp[i], dp[j] + a[i]);
  }

  cout << *max_element(dp + 1, dp + n + 1);
}
