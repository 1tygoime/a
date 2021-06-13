#include <bits/stdc++.h>
using namespace std;

set <int> s;

int main(){
  int n;
  for(cin >> n; n--; ){
    int x;
    cin >> x;
    s.insert(x);
  }
  cout << s.size();
}
