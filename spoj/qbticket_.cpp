#include <bits/stdc++.h>
using namespace std;

long long pos[100000];
int l[3], c[3];

long long dp[100000];

int main(){
  for(int &i: l)
    cin >> i;

  for(int &i: c)
    cin >> i;

  int n;
  cin >> n;

  int s, t;
  cin >> s >> t;

  s--;
  t--;

  if(s > t)
    swap(s, t);

  for(int i = 1; i < n; i++)
    cin >> pos[i];

  for(int i = s + 1; i <= t; i++){
    dp[i] = LLONG_MAX;

    for(int j = 0; j < 3; j++){
      int it = lower_bound(pos, pos + i, pos[i] - l[j]) - pos;

      if(it == i)
        continue;

      dp[i] = min(dp[i], dp[it] + c[j]);
    }
  }

  cout << dp[t];
}
