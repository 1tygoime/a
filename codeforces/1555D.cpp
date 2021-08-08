#include<bits/stdc++.h>
using namespace std;

int dp[200001][7];

void solve(){
  int n, m; string s;
  cin >> n >> m >> s;

  string ex = "abc";

  for(int typ = 1; typ <= 6; typ++, next_permutation(ex.begin(), ex.end())){
    for(int i = 0; i < n; i++){
      dp[i][typ] = (i > 0 ? dp[i - 1][typ] : 0) + (s[i] != ex[i % 3]);
    }

  }

  while(m--){
    int l, r;
    cin >> l >> r;

    l--;
    r--;

    int res = 1e9;
    for(int i = 1; i <= 6; i++){
      int val1 = l > 0 ? dp[l - 1][i] : 0;
//      int val2 = r > 0 ? dp[r - 1][i]
      res = min(res, dp[r][i] - val1);
    }

    cout << res << '\n';
  }
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int t;
  solve();

}
