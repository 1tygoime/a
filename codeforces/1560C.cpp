#include<bits/stdc++.h>
using namespace std;

void solve(){
  int k;
  cin >> k;

  int f = 0;
  while((f + 1) * (f + 1) < k) ++f;

//  int f = trunc(sqrt(k));

//  while((f + 1) * (f + 1) < k) ++f;
//  cout << f<< endl;

  k -= f * f;
  ++f;

  if(k <= f){
    cout << k << ' ' << f << '\n';
    return;
  }

  cout << f << ' ' << 2 * f - k << '\n';
//  cout << res << '\n';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  for(cin >> t; t--; ) solve();
}
