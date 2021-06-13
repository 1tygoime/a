#include <bits/stdc++.h>
using namespace std;

int x, n;
multiset <int> dist, lights;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  cin >> x;
  lights.insert(0); lights.insert(x);
  dist.insert(x);

  for(cin >> n; n--; ){
    cin >> x;
    auto it1 = lights.upper_bound(x), it2 = it1--;
    dist.erase(dist.find(*it2 - *it1));
    dist.insert(x - *it1); dist.insert(*it2 - x);
    lights.insert(x);
    cout << *(dist.rbegin()) << ' ';
  }
}
