#include<bits/stdc++.h>
using namespace std;

set<pair<int, int>> s;

int main(){
  for(string r; cin >> r; ){
    if(r == "END") return 0;

    int x, y;
    if(r == "NEW"){
      cin >> x >> y;
      if(y == 1)
        for(int i = 1; i <= x; i++)
          for(int j = 1; j <= x; j++) s.insert({i, j});
    }

    if(r == "ADD"){
      cin >> x >> y;
      s.insert({x, y});
    }

    if(r == "DEL"){
      cin >> x >> y;
      s.erase({x, y});
    }

    if(r == "ANY"){
      cout << s.rbegin()->first << ' ' << s.rbegin()->second << '\n';
      s.erase(*s.rbegin());
    }

    if(r == "EDG"){
      cin >> x >> y;
      cout << (s.count({x, y}) ? "YES\n" : "NO\n");
    }
  }
}
