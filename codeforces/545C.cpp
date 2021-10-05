#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

int x[N], h[N];
int dp[N][3];

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

//  freopen("D:\\Code\\Algo\\_GenTest\\_inp.txt","r",stdin);
//  freopen("D:\\Code\\Algo\\_GenTest\\compare_file\\2.out","w",stdout);

  int n;
  cin >> n;

  for(int i = 1; i <= n; i++)
    cin >> x[i] >> h[i];

  if(n <= 2)
    return cout << n, 0;

  x[0] = INT_MIN;
  x[n + 1] = INT_MAX;

  for(int i = 1; i <= n; i++){
    //dont fell
    dp[i][0] = max({dp[i - 1][0], dp[i - 1][1], dp[i - 1][2]});

    //left
    dp[i][1] = dp[i][0];
    if(x[i] - h[i] > x[i - 1])
      dp[i][1] = max(dp[i][1], max(dp[i - 1][0], dp[i - 1][1]) + 1);
    if(x[i] - h[i] > x[i - 1] + h[i - 1])
      dp[i][1] = max(dp[i][1], dp[i - 1][2] + 1);

    //right
    dp[i][2] = dp[i][0];
    if(x[i] + h[i] < x[i + 1])
      dp[i][2] = max(dp[i][2], dp[i][0] + 1);
  }

//  for(int i = 1; i <= n; i++)
//    cout << dp[i][0] << ' ' << dp[i][1] << ' ' << dp[i][2] << endl;

  cout << max({dp[n][0], dp[n][1], dp[n][2]});
  return 0;
}
