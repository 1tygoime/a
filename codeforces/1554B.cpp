#include<bits/stdc++.h>
using namespace std;

int a[100001];

void solve(){
  int n, k;
  cin >> n >> k;
  for(int i = 1; i <= n; i++)
    cin >> a[i];

  long long res = -1e18;

  for(int i = max(1, n - 1000); i <= n; i++)
    for(int j = i + 1; j <= n; j++)
      res = max(res, 1LL * i * j - 1LL * k * (a[i] | a[j]));

  cout << res << '\n';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int t;
  for(cin >> t; t--; )
    solve();
}
