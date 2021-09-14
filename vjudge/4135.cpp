//http://acm.hdu.edu.cn/showproblem.php?pid=4135

#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll solve(){
  ll a, b;
  int n;
  cin >> a >> b >> n;

  ll res = b - a + 1;

  vector<int> d;
  for(int i = 2; i * i <= n; i++)
    if(n % i == 0){
      d.push_back(i);
      while(n % i == 0) n /= i;
    }

  if(n > 1) d.push_back(n);

  int sz = d.size();
  for(int msk = 1; msk < 1 << sz; msk++){
    long long cur = 1;
    int cnt = __builtin_popcount(msk);

    for(int j = 0; j < sz; j++)
      if(msk >> j & 1)
        cur *= d[j];

    long long nums = b / cur - (a - 1) / cur;

    if(cnt & 1)
      res -= nums;
    else
      res += nums;
  }

  return res;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int t;
  cin >> t;

  for(int i = 1; i <= t; i++)
    cout << "Case #" << i << ": " << solve() << '\n';
}
