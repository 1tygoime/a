#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n, sum = 0; cin >> n;
  for(int i = 1; i <= n; i++){
    int x;
    cin >> x;
    sum += x;
  }

  cout << (sum < n ? 1 : sum - n) << '\n';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int t;
  for(cin >> t; t--; ) solve();
}
