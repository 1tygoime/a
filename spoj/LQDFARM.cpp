#include <bits/stdc++.h>
using namespace std;

int a[2001], b[2001], q, m, k, sum;
bool dp[2000 * 150 + 1];

int main(){
  dp[0] = 1;
  cin >> q >> m >> k;

  for(int i = 1; i <= m; i++){
    cin >> a[i];
    sum += a[i];
    for(int j = sum; j >= a[i]; j--) dp[j] = dp[j] || dp[j - a[i]];
  }

  for(int i = 1; i <= k; i++) cin >> b[i];

  if(dp[q]) return !(cout << q);
  //choose strips from field
  if(sum > q) return !(cout << q - 1);

  int res = sum;//num of cypress trees
  sort(b + 1, b + 1 + k, greater<int>());
  for(int i = 1; i <= k; i++){
    if(res + b[i] >= q) return !(cout << q - i);
    res += b[i];
  }

  return 0;
}
