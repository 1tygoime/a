#include<bits/stdc++.h>
using namespace std;

int a[100001];

void solve(){
  int n;
  cin >> n;
  for(int i = 1; i <= n; i++)
    cin >> a[i];

  long long res = -1e18;
  for(int i = 2; i <= n; i++)
    res = max(res, 1LL * a[i] * a[i - 1]);

  cout << res << '\n';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int t;
  for(cin >> t; t--; )
    solve();
}
