#include<bits/stdc++.h>
using namespace std;

int dp[105], mx[105], a[105], b[105];

int main(){
  int n, k;
  cin >> n >> k;

  for(int i = 1; i <= n; i++)
    cin >> a[i];

  for(int i = 1; i <= n; i++)
    cin >> b[i];

  for(int i = 1; i <= n; i++){
    int p = upper_bound(a + 1, a + i, a[i] - k) - a - 1;
    dp[i] = max(dp[i - 1], mx[p] + b[i]);
    mx[i] = max(mx[i - 1], dp[i]);
  }

  cout << *max_element(dp + 1, dp + 1 + n);
}
