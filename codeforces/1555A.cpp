#include<bits/stdc++.h>
using namespace std;

void solve(){
  long long n;
  cin >> n;

  cout << 5LL * max((n + 1) / 2, 3LL) << '\n';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int t;
  for(cin >> t; t--; ) solve();
}
