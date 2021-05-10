#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second

int b[5005], n;
pair <int, int> a[5005];

void solve(){
  cin >> n;
  for(int i = 1; i <= n; i++) cin >> a[i].F >> a[i].S;
  sort(a + 1, a + 1 + n);
  memset(b, 0, sizeof(b));
  b[1] = a[n].S;
  int m = 1;
  // LDS
  // tim nhung cap ai < aj, bi > bj
  for(int i = n - 1; i >= 1; i--){
    int k = lower_bound(b + 1, b + 1 + m, a[i].S) - b;
    m = max(m, k);
    b[k] = a[i].S;
  }
  cout << m << '\n';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int T;
  for(cin >> T; T--; ) solve();
}