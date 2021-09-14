#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;
const int mod = 1e9 + 7;

long long dp[N][3], c[3];

long long get(int i, int m1, int m2){
  return (dp[i - 1][m1] % mod * c[m2] % mod) % mod;
}

int main(){
  int n;
  long long l, r;

  cin >> n >> l >> r;

  c[0] = r / 3 - (l - 1) / 3;
  c[1] = (r - 1) / 3 - (l - 1) / 3 + (l % 3 == 1);
  c[2] = r - l + 1 - c[0] - c[1];

//  cout << c[0] << ' ' << c[1] << ' ' << c[2] << endl;

  dp[1][0] = c[0], dp[1][1] = c[1], dp[1][2] = c[2];
  for(int i = 2; i <= n; i++){
    dp[i][0] = (get(i, 0, 0) + get(i, 1, 2) + get(i, 2, 1)) % mod;
    dp[i][1] = (get(i, 1, 0) + get(i, 0, 1) + get(i, 2, 2)) % mod;
    dp[i][2] = (get(i, 2, 0) + get(i, 1, 1) + get(i, 0, 2)) % mod;
  }

  cout << dp[n][0];

  return 0;
}
