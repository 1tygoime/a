#include <bits/stdc++.h>
using namespace std;

multiset <long long> s;
long long res, ans; int n;

int main(){
  for(cin >> n; n--; ){
    long long x; cin >> x;
    s.insert(x);
    res += x;
  }

  while(s.size() > 1){
    long long v1 = *s.begin();
    s.erase(s.begin());

    v1 += *s.begin(),
    s.erase(s.begin());

    ans += v1;
    s.insert(v1);

  }

  cout << res << ' ' << ans;

  return 0;
}
