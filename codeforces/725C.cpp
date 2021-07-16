#include <bits/stdc++.h>
using namespace std;

int n, a[200001], l, r;

void solve(){
  long long res = 0;
  cin >> n >> l >> r;
  for(int i = 1; i <= n; i++) cin >> a[i];

  sort(a + 1, a + 1 + n);
  for(int i = 1; i <= n; i++){
    int ii = lower_bound(a + i + 1, a + n + 1, l - a[i]) - a;
    int jj = upper_bound(a + i + 1, a + n + 1, r - a[i]) - a;
    if(jj - ii <= 0) continue;
    res += jj - ii;
  }

  cout << res << '\n';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int t;
  for(cin >> t; t--; ) solve();
}
