#include<bits/stdc++.h>
using namespace std;

int a[101];

void solve(){
  int n;
  cin >> n;

  for(int i = 1; i <= n; i++) cin >> a[i];

  int res = a[1];
  for(int i = 1; i <= n; i++)
    res &= a[i];

  cout << res << '\n';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int t;
  for(cin >> t; t--; )
    solve();

  return 0;
}
