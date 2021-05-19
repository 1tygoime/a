#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
using ordered_set = tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>;

ordered_set s;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int q;
  for(cin >> q; q--; ){
    char c; int val; cin >> c >> val;
    if(c == 'I') s.insert(val);
    else if(c == 'D') s.erase(s.find(val));
    else if(c == 'K'){
      if(val > (int)s.size()) {cout << "invalid\n"; continue;}
      auto it = s.find_by_order(--val);
      cout << *it << '\n';
    }
    else cout << s.order_of_key(val) << '\n';
  }
  return 0;
}
