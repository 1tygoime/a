#include <bits/stdc++.h>
using namespace std;

#define getbit(x, i) (((x) >> (i)) & 1LL)

int n, m, save[31][31];
// dp[i, mask]: number of ways when go to i-th row, state mask (mask[j] = 1 if cell (i, j) has cow)
int dp[30][1 << 5];

bool valid(int msk1, int msk2){
  for(int j = 0; j < n - 1; j++){
    // 2x2 empty
    bool v1 = (getbit(msk1, j) == 0 && getbit(msk1, j + 1) == 0 && getbit(msk2, j) == 0 && getbit(msk2, j + 1) == 0);

    // 4 cows create 2x2 square
    bool v2 = (getbit(msk1, j) && getbit(msk1, j + 1) && getbit(msk2, j) && getbit(msk2, j + 1));
    if(v1 || v2) return 0;
  }
  return 1;
}

void solve(){
  memset(dp, 0, sizeof(dp));

  for(int mask = 0; mask < (1 << n); mask++) dp[0][mask] = 1;

  for(int i = 1; i < m; i++)
    for(int mask = 0; mask < (1 << n); mask++)
      for(int state = 0; state < (1 << n); state++){
        if(valid(mask, state)) dp[i][mask] += dp[i - 1][state];
      }

  int s = 0;
  for(int mask = 0; mask < (1 << n); mask++) s += dp[m - 1][mask];
  cout << s << '\n';

  save[m][n] = s;
}

int main(){
  int t;
  for(cin >> t; t--; ){
    cin >> n >> m;

    // m : row, n : col
    if(n > m) swap(n, m);

    if(save[m][n]){
      cout << save[m][n] << '\n';
      continue;
    }

    solve();
  }
  return 0;
}
