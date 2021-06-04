#include<bits/stdc++.h>
using namespace std;

#define getbit(_x, _i) (((_x) >> (_i)) & 1LL)
#define onbit(_x, _i) ((_x) | (1LL << (_i)))
#define offbit(_x, _i) ((_x) & (~(1LL << (_i))))

int c[17][17], n, dp[17][1 << 17];

int main(){
  cin >> n;
  for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++) cin >> c[i][j];

  for(int i = 0; i <= n; i++){
    for(int j = 0; j <= (1 << n); j++) dp[i][j] = 1e9;
    dp[i][1 << i] = 0;
  }

  for(int mask = 1; mask < (1 << n); mask++)
    for(int i = 0; i < n; i++)
      if(getbit(mask, i)){
        int state = offbit(mask, i);

        for(int j = 0; j < n; j++)
          if(getbit(state, j)) dp[i][mask] = min(dp[i][mask], dp[j][state] + c[j][i]);
      }

  int res = 1e9;
  for(int i = 0; i < n; i++) res = min(res, dp[i][(1 << n) - 1]);
  cout << res;
}
