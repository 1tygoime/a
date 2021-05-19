#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;
const int MAX = 1e5;

int n, a[105], m;
long long dp[2][MAX * 2 + 5];


void solve(){
  memset(dp, 0, sizeof(dp));
  int L = 0, R = 0, sum = 0;

  cin >> n >> m;
  for(int i = 1; i <= n; i++)
    cin >> a[i],
    sum += a[i],
    L += min(a[i], 0),
    R += max(a[i], 0);

  // s = (s - m) / 2 + (s + m) / 2
  // change diff's sign : s= (s + m) / 2 - (s - m) / 2 = m
  int diff = (sum - m) / 2;

  if((abs(sum % 2) != abs(m % 2)) || diff < L || diff > R){
    cout << "0\n";
    return;
  }

  dp[0][MAX] = 1;
  for(int i = 1; i <= n; i++){
    int index = i % 2;

    for(int j = L; j <= R; j++) dp[index][j + MAX] = dp[1 - index][j + MAX];
    for(int j = L; j <= R; j++){
      if(j - a[i] >= L && j - a[i] <= R)
        dp[index][j + MAX] = (dp[index][j + MAX] + dp[1 - index][j - a[i] + MAX]) % MOD;
    }
  }

  cout << dp[n % 2][diff + MAX] % MOD << '\n';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);


  int t;
  for(cin >> t; t--;) solve();
  return 0;
}
