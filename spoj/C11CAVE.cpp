#include <bits/stdc++.h>
using namespace std;

int res, cnt, n, h, dp[500005], // so chuong ngai vat o do cao i
                    curr;       // so chuong ngai vat o do cao hien tai

int main(){
  cin >> n >> h;
  res = n;
  for(int i = 1; i <= n; i++){
    int x;
    cin >> x;
    if(i & 1) dp[1]++, dp[x + 1]--;
    else dp[h - x + 1]++;
  }

  for(int i = 1; i <= h; i++){
    curr += dp[i];
    if(curr < res) res = curr, cnt = 1;
    else if(curr == res) cnt++;
  }

  cout << res << ' ' << cnt;

  return 0;
}
