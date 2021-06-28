#include<bits/stdc++.h>
using namespace std;

const long long mod = 1e8;

long long dp[1001][1 << 2]; int n;

int main(){
  cin >> n;
  dp[0][0] = 1;
  for(int i = 1; i <= n; i++)
    for(int mask = 0; mask < (1 << 2) - 1; mask++){
      for(int state = 0; state < (1 << 2) - 1; state++){
        if(mask & state) continue;
        dp[i][mask] = (dp[i][mask] + dp[i - 1][state]) % mod;
      }
    }

  long long res = 0;
  for(int mask = 0; mask < (1 << 2) - 1; mask++) res = (res + dp[n][mask]) % mod;
  cout << res;
}
