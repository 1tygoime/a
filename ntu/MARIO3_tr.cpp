#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll mod = 1e9;
int n, a[1005];
ll dp[1005];

int main(){
  #ifndef ONLINE_JUDGE
  freopen("MARIO3.inp", "r", stdin);
  freopen("MARIO3.ans", "w", stdout);
  #endif // ONLINE_JUDGE
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> n;
  for(int i = 1; i <= n; i++) cin >> a[i];

  dp[0] = 1;
  dp[1] = (a[1] != 2);
  if(a[2] != 2) dp[2] = dp[1] + (a[2] != 1) * dp[0];

  for(int i = 3; i <= n + 1; i++)
    if(a[i] == 1) dp[i] = dp[i - 1];
    else if(!a[i]) dp[i] = (dp[i] + dp[i - 1] + dp[i - 2] + (a[i - 3] != 1) * dp[i - 3]) % mod;

  cout << dp[n + 1];
}
