#include <bits/stdc++.h>
using namespace std;

multiset <int> s;
int n, m;

int main(){
  for(cin >> n >> m; n--; ){
    int x;
    cin >> x;
    s.insert(x);
  }

  while(m--){
    int x;
    cin >> x;
    auto it = s.upper_bound(x);
    if(it == s.begin()){
      cout << "-1\n";
      continue;
    }
    cout << *(--it) << '\n';
    s.erase(it);
  }

  return 0;
}
