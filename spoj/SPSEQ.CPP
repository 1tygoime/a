#include <bits/stdc++.h>
using namespace std;

int n, b[100005], a[100005], m = 1, lis[100005], lds[100005], res;

void init_lis(){
  lis[1] = 1, b[1] = a[1];
  for(int i = 2; i <= n; i++){
    lis[i] = lower_bound(b + 1, b + m + 1, a[i]) - b;
    m = max(m, lis[i]);
    b[lis[i]] = a[i];
  }
}

void init_lds(){
  reverse(a + 1, a + n + 1);
  memset(b, 0, sizeof(b));
  m = 1;
  lds[1] = 1, b[1] = a[1];
  for(int i = 2; i <= n; i++){
    lds[i] = lower_bound(b + 1, b + m + 1, a[i]) - b;
    m = max(m, lds[i]);
    b[lds[i]] = a[i];
  }
}

int main() {
  #ifndef ONLINE_JUDGE
//  freopen("spseq.inp", "r", stdin);
  #endif // ONLINE_JUDGE
  cin >> n;
  for(int i = 1; i <= n; i++) cin >> a[i];
  init_lis();
  init_lds();
  for(int i = 1; i <= n; i++) res = max(res, 2 * min(lis[i], lds[n - i + 1]) - 1);
  cout << res;
}
