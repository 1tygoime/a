#include <bits/stdc++.h>
using namespace std;

#define w first
#define v second

long long min_w = 1e18, max_k = -1e18, res;
multiset <long long> s;
pair <long long, long long> a[300000];
int n, k;

bool cmp(const pair <long long, long long> &a, const pair <long long, long long> &b){
  return a.v > b.v;
}

int main(){
  cin >> n >> k;
  for(int i = 0; i < n; i++) cin >> a[i].w >> a[i].v,
                             min_w = min(min_w, a[i].w);

  for(int i = 0; i < k; i++){
    long long x;
    cin >> x;
    max_k = max(max_k, x);
    s.insert(x);
  }

  if(min_w > max_k) return !(cout << 0);

  sort(a, a + n, cmp);
//  for(int i = 0; i < n; i++) cout << a[i].w << ' ' << a[i].v << '\n';

  for(int i = 0; i < n; i++){
    if(s.empty()) break;
    auto it = s.lower_bound(a[i].w);
    if(it == s.end()) {continue;}
//    cout << *it << "\n";

    s.erase(it); res += a[i].v;
  }

  cout << res;

  return 0;
}
