#include<bits/stdc++.h>
using namespace std;

long long dp[100001];

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int n, W;
  cin >> n >> W;

  for(int i = 1; i <= n; i++){
    int w, v;
    cin >> w >> v;

    for(int j = 100000; j >= w; j--)
      dp[j] = max(dp[j], dp[j - w] + v);
  }

  cout << dp[W];

  return 0;
}
