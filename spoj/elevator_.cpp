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

int dp[MAX_W];

int main(){
  int n;
  cin >> n;

  for(int i = 1; i <= n; i++)
    cin >> b[i].h >> b[i].a >> b[i].c;

  sort(b + 1, b + 1 + n);

  dp[0] = 1;

  for(int i = 1; i <= n; i++)
    for(int j = b[i].a; j >= b[i].h; j--)
      for(int k = 0; k <= b[i].c && k * b[i].h <= j; k++)
        dp[j] |= dp[j - b[i].h * k];

//  int res = -1;
  for(int i = MAX_W - 1; i >= 0; i--)
    if(dp[i])
      return cout << i, 0;

//  cout << res;

  return 0;
}
