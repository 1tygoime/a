#include<bits/stdc++.h>
using namespace std;

int c[55][5];

void solve(){
  memset(c, 0, sizeof(c));

  int n;
  cin >> n;
  string s;
  cin >> s;
  s = ' ' + s;

  for(int i = 1; i <= n; i++)
    for(int j = 0; j <= 1; j++)
      c[i][j] = c[i - 1][j] + (s[i] - 'a' == j);

//  for(int i = 1; i <= n; i++)
//    for(int j = 0; j <= 1; j++) cout << c[i][j] << ' '; cout<<endl;

  for(int i = 1; i <= n; i++)
    for(int j = i + 1; j <= n; j++)
      if(c[j][0] - c[i - 1][0] == c[j][1] - c[i - 1][1]){
        cout << i << ' ' << j << '\n';
        return;
      }

  cout << "-1 -1\n";
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int t;
  for(cin >> t; t--; )
    solve();

  return 0;
}
