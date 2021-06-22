#include <bits/stdc++.h>
using namespace std;

set <int, greater<int>> s;
map <int, int> c;

int main(){
  string r; int n = 0;
  while(cin >> r){
    if(r[0] == '+'){
      if(n >= 15000) continue;

      int num = 0;
      for(int i = 1; i < (int)r.size(); i++) num = num * 10 + r[i] - '0';
      s.insert(num), c[num]++, n++;
    }

    else if(!s.empty()){
      int x = *s.begin();

      n -= c[x], s.erase(x), c[x] = 0;
    }
  }

  cout << s.size() << '\n';
  for(const int &i: s) cout << i << '\n';

  return 0;
}
