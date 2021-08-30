#include<bits/stdc++.h>
using namespace std;

void solve(){
  int l, r;
  cin >> l >> r;

  cout << (r >= (l << 1) ? (r - 1) >> 1 : r % l) << '\n';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int t;
  for(cin >> t; t--; ) solve();
}
