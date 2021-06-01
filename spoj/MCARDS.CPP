#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second

int color[] = {0, 1, 2, 3, 4}, pr;
pair <int, int> a[404];

int main(){
  int n, c;
  cin >> c >> n;
  for(int i = 1; i <= n * c; i++) cin >> a[i].f >> a[i].s;

  do{
    multiset <int> s;
    for(int i = 1; i <= n * c; i++){
      int x = color[a[i].f] * n + a[i].s;
      auto it = s.lower_bound(x);
      if(it != s.end()) s.erase(it);
      s.insert(x);
    }
    pr = max(pr, (int)s.size());
  } while(next_permutation(color, color + 5));

  cout << n * c - pr;
  return 0;
}
