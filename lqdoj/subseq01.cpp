#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n, curr = 0;
  int s_min = 0, res = INT_MIN;
  int ans = 0, ma = -1e9;

  for(cin >> n; n--; ){
    int x;
    cin >> x;
    // sub1
    if(x > 0) ans += x;
    ma = max(ma, x);
    // sub2
    curr += x;
    res = max(res, curr - s_min);
    s_min = min(s_min, curr);
  }

  cout << (ans ? ans : ma) << ' ' << res << "\n";
}

int main(){
  int t;
  for(cin >> t; t--; ) solve();
  return 0;
}
