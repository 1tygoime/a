#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;

long long a[N];

void orzzzz(){
  int n;
  cin >> n;

  for(int i = 1; i <= n; i++)
    cin >> a[i];

  sort(a + 1, a + 1 + n);

  long long all_s = accumulate(a + 1, a + 1 + n, 0LL);

  int q;
  for(cin >> q; q--; ){
    long long x, y, cost = LLONG_MAX;
    cin >> x >> y;

    long long s = all_s;

    //cho rong lower_bound(x) +- 1
    auto it1 = lower_bound(a + 1, a + 1 + n, x) - a;
    if(it1 <= n)
      cost = min(cost, max(x - a[it1], 0LL) + max(y - (all_s - a[it1]), 0LL));
    if(it1 < n)
      cost = min(cost, max(x - a[it1 + 1], 0LL) + max(y - (all_s - a[it1 + 1]), 0LL));
    if(it1 > 1)
      cost = min(cost, max(x - a[it1 - 1], 0LL) + max(y - (all_s - a[it1 - 1]), 0LL));

    //cho rong so 1
      cost = min(cost, max(x - a[1], 0LL) + max(y - (all_s - a[1]), 0LL));

    //cho rong so n
      cost = min(cost, max(x - a[n], 0LL) + max(y - (all_s - a[n]), 0LL));

    cout << cost << '\n';
  }
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int orz = 1;
  while(orz--)
    orzzzz();

  return 0;
}
