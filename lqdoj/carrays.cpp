//dp[i] = (m - 1) * (dp[i - 1] + ... + dp[i - k + 1])
//res = m ^ n - dp[i]

#include<bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;
const int MAX = 1e6 + 1;

int n, m, k;
long long dp[MAX], s[MAX];

long long pw(int x, int y){
  if(!y) return 1;

  long long t = pw(x, y >> 1) % MOD;

  return y & 1 ? (t % MOD * t % MOD * x % MOD) % MOD
               : (t * t) % MOD;
}

int main(){
  cin >> n >> m >> k;

  dp[0] = 1;
  s[0] = 1;
  for(int i = 1; i <= k; i++)
    dp[i] = (dp[i - 1] * m) % MOD,
    s[i] = (s[i - 1] + dp[i]) % MOD;

  for(int i = k; i <= n; i++){
    dp[i] = (m - 1) % MOD * (s[i - 1] - s[i - k] + MOD) % MOD;
    s[i] = (s[i - 1] + dp[i]) % MOD;
  }

  cout << (pw(m, n) - dp[n] + MOD) % MOD;

  return 0;
}

