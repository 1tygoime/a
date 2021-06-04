#include <bits/stdc++.h>
using namespace std;

#define getbit(_x, _i) (((_x) >> (_i)) & 1LL)
#define onbit(_x, _i) ((_x) |= (1LL << (_i)))
#define offbit(_x, _i) ((_x) & (~(1LL << (_i))))

int a[8][10001], n;

// dp[j, s]: maximum value when go to col j, state s (s[i] = 1 if i-th row is chosen)
long long dp[10001][1 << 8], ma = -1e18;

int main(){
  cin >> n;
  for(int i = 0; i < 8; i++)
    for(int j = 0; j < n; j++)
      cin >> a[i][j],
      ma = max(ma, 1LL * a[i][j]);

  if(ma < 0) return !(cout << ma);

  for(int j = 0; j < n; j++)
    for(int mask = 0; mask < (1 << 8); mask++){
      if(mask & (mask >> 1)) continue; // two rows have adjacent cell (common bit 1)

      int v = 0;
      for(int i = 0; i < 8; i++) if(getbit(mask, i)) v += a[i][j];
      dp[j][mask] = v;

      if(!j) continue;

      for(int state = 0; state < (1 << 8); state++){
        if(state & (state >> 1)) continue;
        if(mask & state) continue; // two columns have adjacent cell (common bit 1)

        dp[j][mask] = max(dp[j][mask], dp[j - 1][state] + v);
      }
    }

  long long res = -1e18;
  for(int mask = 0; mask < (1 << 8); mask++){
    if(mask & (mask >> 1)) continue;
    res = max(res, dp[n - 1][mask]);
  }

  cout << res;
}

