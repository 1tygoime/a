#include<bits/stdc++.h>
using namespace std;

void solve(){
  int a, b, c;

  cin >> a >> b >> c;

  if(a > b) swap(a, b);

  int res = c + b - a;
  if(res > 2 * (b - a)) res -= 2 * (b - a);
  if(max(max(a, b), c) > 2 * (b - a)) res = -1;

  cout << res << '\n';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  for(cin >> t; t--; ) solve();
}
