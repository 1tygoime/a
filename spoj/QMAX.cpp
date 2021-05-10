#include <bits/stdc++.h>
using namespace std;

long long a[50001];
int n, m, q;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  for(cin >> n >> m; m--; ){
    int u, v, k;
    cin >> u >> v >> k;
    a[u] += k, a[v + 1] -= k;
  }
  for(int i = 1; i <= n; i++) a[i] += a[i - 1];

  for(cin >> q; q--; ){
    int u, v;
    long long ma = -1;
    cin >> u >> v;
    for(int i = u; i <= v; i++) ma = max(ma, a[i]);
    cout << ma << '\n';
  }
  return 0;
}
