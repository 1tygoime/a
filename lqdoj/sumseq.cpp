#include <bits/stdc++.h>
using namespace std;

long long x, a[100005];
int n, q, res;

int main(){
  cin >> n >> x >> q;
  for(int i = 1; i <= n; i++){
    cin >> a[i];
    a[i] += a[i - 1];
  }
  while(q--){
    int u, v;
    cin >> u >> v;
    res += (a[v] - a[u - 1] < x);
  }
  cout << res;
  return 0;
}
