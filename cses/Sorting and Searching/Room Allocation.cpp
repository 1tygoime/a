#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second

int ans[200005], n, res, last;
pair <pair <int, int>, int> v[200005];
multiset <pair <int, int>> s; // s[i] = { time, room }

int main(){
  cin >> n;
  for(int i = 1; i <= n; i++) cin >> v[i].f.f >> v[i].f.s, v[i].s = i;

  sort(v + 1, v + 1 + n);
  for(int i = 1; i <= n; i++){
    if(s.empty()){
      s.insert({v[i].f.s, ++last});
      ans[v[i].s] = last;
    }
    else{
      pair <int, int> de = *(s.begin());
      if(de.f < v[i].f.f){
        s.erase(de);
        s.insert({v[i].f.s, de.s});
        ans[v[i].s] = de.s;
      }
      else{
        s.insert({v[i].f.s, ++last});
        ans[v[i].s] = last;
      }
    }

    res = max(res, (int)s.size());
  }

  cout << res << '\n';
  for(int i = 1; i <= n; i++) cout << ans[i] << ' ';

  return 0;
}
