#include<bits/stdc++.h>
using namespace std;

void solve(){
  string s;
  cin >> s;

  int c1 = 0, c2 = 0;

  for(int i = 0; i < s.size(); i++)
    if(i & 1) c2 = c2 * 10 + s[i] - '0';
    else c1 = c1 * 10 + s[i] - '0';

  cout << (c1 + 1) * (c2 + 1) - 2 << '\n';
}

int main() {
  int t;
  for(cin >> t; t--; )
    solve();
}
