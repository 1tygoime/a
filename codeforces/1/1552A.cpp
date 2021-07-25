#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n; string s;
  cin >> n >> s;

  string s_t = s;
  sort(s_t.begin(), s_t.end());

  int res = 0;
  for(int i = 0; i < n; i++)
    res += (s[i] != s_t[i]);

  cout << res << '\n';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int t;
  for(cin >> t; t--; ) solve();
}
