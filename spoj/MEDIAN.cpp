#include <bits/stdc++.h>
using namespace std;

const long long mod = 65536;
long long seed, mul, add, n, k, a[250001];
multiset<long long> l, // element from 1 -> median
                    r; // element from median -> n

long long solve(){
  l.clear(), r.clear();
  long long res = 0;

  cin >> seed >> mul >> add >> n >> k;

  a[1] = seed;
  for(int i = 2; i <= n; i++) a[i] = (a[i - 1] * mul + add) % mod;

  for(int i = 1; i < k; i++) l.insert(a[i]);
  for(int i = k; i <= n; i++){
    if(!l.empty() && *(l.rbegin()) >= a[i]) l.insert(a[i]);
    else r.insert(a[i]);

    while(l.size() > r.size()){
      int x = *l.rbegin();
      l.erase(l.find(x));
      r.insert(x);
    }
    while(r.size() > l.size()){
      int x = *r.begin();
      r.erase(r.find(x));
      l.insert(x);
    }

    res += *l.rbegin();

    auto it = l.find(a[i - k + 1]);
    if(it != l.end()) l.erase(it);
    it = r.find(a[i - k + 1]);
    if(it != r.end()) r.erase(it);
  }

  return res;

}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int t; cin >> t;
  for(int i = 1; i <= t; i++)
    cout << "Case #" << i << ": " << solve() << '\n';

  return 0;
}
