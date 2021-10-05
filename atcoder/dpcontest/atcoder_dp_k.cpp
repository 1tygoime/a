#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

bool dp[N];
int a[N];

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int n, k;
  cin >> n >> k;

  for(int i = 1; i <= n; i++)
    cin >> a[i];

  for(int i = 1; i <= k; i++)
    for(int j = 1; j <= n; j++)
      if(i >= a[j] && !dp[i - a[j]])
        dp[i] = true;

  cout << (dp[k] ? "First" : "Second");

  return 0;
}
