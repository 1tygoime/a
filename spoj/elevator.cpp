#include<bits/stdc++.h>
using namespace std;

const int MAX = 405;
const int MAX_W = 40005;

struct block{
  int h, a, c;

  bool operator <(const block &o) const{
    return a < o.a;
  }
} b[MAX];

int dp[MAX][MAX_W];

int main(){
  int n;
  cin >> n;

  int mx_c = -1;
  for(int i = 1; i <= n; i++)
    cin >> b[i].h >> b[i].a >> b[i].c,
    mx_c = max(mx_c, b[i].c);

  sort(b + 1, b + 1 + n);

  for(int i = 0; i <= n; i++) dp[i][0] = 1;

  for(int i = 1; i <= n; i++)
    for(int j = 0; j <= b[i].a; j++)
      for(int k = 0; k <= b[i].c; k++)
        if(j >= k * b[i].h)
          dp[i][j] |= dp[i - 1][j - k * b[i].h];

//  int res = -1;
  for(int i = MAX_W - 1; i >= 0; i--)
    if(dp[n][i])
      return cout << i, 0;

//  cout << res;

  return 0;
}
