#include <bits/stdc++.h>
using namespace std;

#define int long long

struct element{
  int sum, pos_a, pos_b;
  bool operator <(const element &i){
    return sum < i.sum;
  }
};

int m, n, k, a[50001], b[50001];
set<element> pq;

int32_t main(){
  cin >> m >> n >> k;

  for(int i = 1; i <= m; i++) cin >> a[i];
  for(int i = 1; i <= n; i++) cin >> b[i];

  sort(a + 1, a + 1 + m);
  sort(b + 1, b + 1 + n);

  pq.insert({a[1] + b[1], 1, 1});
  while(k--){
    element t = *pq.begin(); pq.erase(pq.begin());
    cout << t.sum << '\n';

    if(t.pos_a == m && t.pos_b == n) break;

    else if(t.pos_a == m) pq.insert({a[m] + b[t.pos_b + 1], m, t.pos_b + 1});
    else if(t.pos_b == n) pq.insert({a[t.pos_a + 1] + b[n], t.pos_a + 1, n});

    else{
      pq.insert({a[t.pos_a] + b[t.pos_b + 1], t.pos_a, t.pos_b + 1});
      pq.insert({a[t.pos_a + 1] + b[t.pos_b], t.pos_a + 1, t.pos_b});
    }
  }

  return 0;
}
