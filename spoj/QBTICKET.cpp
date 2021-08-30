#include<bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;

int l[4], c[4];
long long a[MAX], dp[MAX];

int main(){
  cin >> l[1] >> l[2] >> l[3] >> c[1] >> c[2] >> c[3];

  int n;
  cin >> n;

  int s, f;
  cin >> s >> f;

  for(int i = 2; i <= n; i++) cin >> a[i];

  for(int i = 0; i <= n + 1; i++) dp[i] = 1e18;
  dp[s] = 0;

  for(int i = s + 1; i <= f; i++)
    for(int j = i - 1; j >= s; j--){

      int curr = a[i] - a[j], val = -1;

      if(curr > l[3]) break;
      else if(curr > l[2]) val = c[3];
      else if(curr > l[1]) val = c[2];
      else val = c[1];

      dp[i] = min(dp[i], dp[j] + val);
    }

  cout << dp[f];

  return 0;
}
