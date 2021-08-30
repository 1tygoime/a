#include<bits/stdc++.h>
using namespace std;

int a[101];

void solve(){
  int n;
  cin >> n;

  string s;
  cin >> s;

  s = ' ' + s + 'R';

  for(int i = 1; i <= n; i++)
    if(s[i] == '?')
      if(s[i - 1] == 'R') s[i] = 'B';
      else if(s[i - 1] == 'B') s[i] = 'R';

  for(int i = n; i >= 1; i--)
    if(s[i] == '?')
      if(s[i + 1] == 'R') s[i] = 'B';
      else if(s[i +  1] == 'B') s[i] = 'R';

  s.erase(0, 1);
  s.pop_back();
  cout << s << '\n';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int t;
  for(cin >> t; t--; )
    solve();

  return 0;
}
