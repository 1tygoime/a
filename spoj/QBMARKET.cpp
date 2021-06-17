#include <bits/stdc++.h>
using namespace std;

#define i128 __int128

void print(i128 x) {
  if (x < 0) {
    putchar('-');
    x = -x;
  }
  if (x > 9) print(x / 10);
  putchar(x % 10 + '0');
}


int n, s, c, m;
i128 dp[100001], pre[100001];

int main(){
  cin >> s >> n; dp[0] = 1;
  for(int i = 1; i <= n; i++){
    cin >> c >> m;

    for(int j = 0; j <= s; j++)
      pre[j] = dp[j] + (j >= c ? pre[j - c] : 0); // pre[j] = dp[j] + dp[j - c] + dp[j - 2c]...

    for(int j = s; j >= 0; j--)
      dp[j] += (j >= c ? pre[j - c] : 0),
      dp[j] -= (j >= c * (m + 1) ? pre[j - c * (m + 1)] : 0);
  }

  print(dp[s]);
}
