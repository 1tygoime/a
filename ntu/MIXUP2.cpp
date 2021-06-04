#include<bits/stdc++.h>
using namespace std;

#define getbit(_x, _i) (((_x) >> (_i)) & 1LL)
#define onbit(_x, _i) ((_x) | (1LL << (_i)))
#define offbit(_x, _i) ((_x) & (~(1LL << (_i))))

int a[17], n, k;
long long dp[17][1 << 17];

int main(){
  cin >> n >> k;
  for(int i = 0; i < n; i++) cin >> a[i];

  for(int i = 0; i < n; i++) dp[i][1 << i] = 1;

  for(int mask = 0; mask < (1 << n); mask++)
    for(int i = 0; i < n; i++)
      if(getbit(mask, i)){

        for(int j = 0; j < n; j++)
          if(getbit(mask, j) && abs(a[i] - a[j]) > k) dp[i][mask] += dp[j][offbit(mask, i)];

      }

  long long res = 0;
  for(int i = 0; i < n; i++) res += (dp[i][(1 << n) - 1]);
  cout << res;
}
