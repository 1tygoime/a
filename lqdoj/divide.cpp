#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;
const int mod = 1e9 + 7;

long long dp[N], pre[N];
int a[N], cnt[N];

int main(){
  int n, k;
  cin >> n >> k;

  for(int i = 1; i <= n; i++)
    cin >> a[i];

  dp[0] = 1;
  pre[0] = 1;

  int cur = 0;

  for(int l = 1, r = 1; r <= n; r++){
    cur += cnt[a[r]] == 0;
    cnt[a[r]]++;

    while(cur > k || (cur - (cnt[a[l]] == 1) >= k && l < r))
      cnt[a[l]]--,
      cur -= cnt[a[l]] == 0,
      ++l;

    if(cur == k)
      dp[r] = (dp[r] + pre[l - 1]) % mod;

    pre[r] = (pre[r - 1] + dp[r]) % mod;
  }


  cout << dp[n];
}
