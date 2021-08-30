#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;

long long dp[N], pre[N], m;

int main(){
  int n;
  cin >> n >> m;

  dp[1] = 1;
  pre[1] = 1;

  for(int i = 2; i <= n; i++){
    dp[i] = pre[i - 1];

    vector<int> divisors = {0};
    for(int j = 1; j * j <= i; j++){
      if(i % j == 0){
        divisors.push_back(i);
        if(i / j != j) divisors.push_back(i / j);
      }
    }

    sort(divisors.begin(), divisors.end());

    for(int j = 1; j < divisors.size(); ++j)
      dp[i] += (divisors[j] - divisors[j - 1]) * dp[i / divisors[j]],
      dp[i] %= m;

    pre[i] = (pre[i - 1] + dp[i]) % m;
  }

//  cout << pre[2] << endl;
//  cout << dp[2] << endl << ' ' << pre[2] << endl;
  cout << dp[n];
}
