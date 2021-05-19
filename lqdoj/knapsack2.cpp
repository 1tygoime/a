#include <bits/stdc++.h>
using namespace std;

//dp[value] = min(weight) dat tong value
int n;
long long W, dp[100005], w[101], v[101], max_val;

int main(){
  cin >> n >> W;
  for(int i = 1; i <= n; i++)
    cin >> w[i] >> v[i],
    max_val = max(max_val, v[i]);

  max_val *= n;

  for(int i = 1; i <= max_val; i++) dp[i] = 1e18;
  for(int i = 1; i <= n; i++)
    for(int j = max_val; j >= v[i]; j--) dp[j] = min(dp[j], dp[j - v[i]] + w[i]);

  for(int i = max_val; i >= 0; i--)
    if(dp[i] <= W) return !(cout << i);

  return 0;
}
