#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

int a[N], b[N];

int main(){
  int n, m;
  cin >> n >> m;

  for(int i = 1; i <= n; i++)
    cin >> a[i];

  for(int i = 1; i <= m; i++)
    cin >> b[i];

  int res = INT_MIN;
  for(int i = 1; i <= n; i++){
    int cur_dist = INT_MAX;

    auto it1 = lower_bound(b + 1, b + 1 + m, a[i]) - b;
    if(it1 >= 1 && it1 <= m) cur_dist = abs(b[it1] - a[i]);

    if(it1 < m) cur_dist = min(cur_dist, abs(b[it1 + 1] - a[i]));
    if(it1 > 1) cur_dist = min(cur_dist, abs(b[it1 - 1] - a[i]));

    res = max(res, cur_dist);
  }

  cout << res;

  return 0;
}
