#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n; string s;

  cin >> n >> s;

  for(char c : s)
    if(c == 'D')
      cout << 'U';
    else if(c == 'U')
      cout << 'D';
    else cout << c;

  cout << '\n';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int t;
  for(cin >> t; t--; )
    solve();
}
