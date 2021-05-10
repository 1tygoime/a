#include <bits/stdc++.h>
using namespace std;

bool dp[40005];
int n, s, a[1005];

int main(){
  cin >> n >> s;
  dp[0] = 1;
  for(int i = 1; i <= n; i++) cin >> a[i];
  for(int i = 1; i <= n; i++)
    for(int j = s; j >= a[i]; j--) if(!dp[j] && dp[j - a[i]]) dp[j] = 1;
  cout << (dp[s] ? "YES" : "NO");
}
