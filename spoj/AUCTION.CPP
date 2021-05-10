#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll a[1005], res, price;
int n, m;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> n >> m;
  for(int i = 0; i < m; i++) cin >> a[i];
  sort(a, a + m, greater<ll>());
  m = min(m, n);
  for(int i = 0; i < m; i++)
    if((i + 1) * a[i] > price) price = (i + 1) * a[i], res = a[i];
  cout << res << " " << price;
}
