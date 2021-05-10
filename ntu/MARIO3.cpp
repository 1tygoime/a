#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll mod = 1e9;
int N, A[1005];
ll dp[1005];

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  #ifndef ONLINE_JUDGE
  freopen("MARIO3.inp", "r", stdin);
  freopen("MARIO3.out", "w", stdout);
  #endif // ONLINE_JUDGE

  cin >> N;
  for(int i = 1; i <= N; i++) cin >> A[i];

  dp[0] = 1;
  for(int i = 0; i <= N; i++){
    if(!A[i])
      for(int j = 1; j <= 3; j++)
        if (!A[i + j] || (A[i + j] == 1 && j == 1)) dp[i + j] += dp[i], dp[i + j] %= mod;
    if(A[i] == 1)
      for(int j = 1; j <= 2; j++)
        if (!A[i + j] || (A[i + j] == 1 && j == 1)) dp[i + j] += dp[i], dp[i + j] %= mod;
  }
  cout << dp[N + 1];
}
