#include <bits/stdc++.h>
using namespace std;

long long x;
int n;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  cin >> n >> x;
  // sj - si max //
  long long curr_s = x, res = x, s_min = x;
  // sj - si min //
  long long ans = x, s_max = x;
  for(int i = 2; i <= n; i++){
    cin >> x;
    curr_s += x;
    //sj-si max//
    res = max(res, curr_s - s_min);
    s_min = min(s_min, curr_s);
    //sj-si min//
    ans = min(ans, curr_s - s_max);
    s_max = max(s_max, curr_s);
  }
  cout << max(res, curr_s - ans);
}
