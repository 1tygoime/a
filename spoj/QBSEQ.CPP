#include <bits/stdc++.h>
using namespace std;

int dp[2][55], x, n, k, ind;

int main(){
  cin >> n >> k;
  for(int i = 1; i < k; i++) dp[0][i] = INT_MIN;
  for(int i = 1; i <= n; i++){
    cin >> x, x %= k;
    ind = i % 2;
    for(int j = 0; j < k; j++) dp[ind][j] = max(dp[1 - ind][j], dp[1 - ind][(j - x + k) % k] + 1);
  }
  cout << dp[ind][0];
}
