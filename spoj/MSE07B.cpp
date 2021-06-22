#include <bits/stdc++.h>
using namespace std;

#define pii pair<int,int>

set <pii> s;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int n, k, p;
  for(cin >> n; n; cin >> n){
    if (n == 1){
      cin >> k >> p;
      s.insert({p, k});
    }

    else if (n == 2){
      if(s.empty())
        cout << 0 << '\n';
      else{
        auto it = s.end();
        cout << (--it)->second << '\n';
        s.erase(it);
      }
    }

    else{
      if (s.empty())
        cout << 0 << '\n';
      else{
        auto it = s.begin();
        cout << it->second << '\n';
        s.erase(it);
      }
    }
  }

	return 0;
}
