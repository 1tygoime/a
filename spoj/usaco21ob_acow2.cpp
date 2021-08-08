#include<bits/stdc++.h>
using namespace std;

char res[101][101];
string s[101];

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int k, n;
  cin >> k >> n;

  map<string, int> mp;
  for(int i = 1; i <= n; i++) {
    string s;
    cin >> s;
    mp[s] = i;
  }

  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= n; j++)
      res[i][j] = (i == j ? 'B' : '?');

  while(k--){
    for(int i = 1; i <= n; i++) cin >> s[i];

    for(int i = 1, f = 1; i <= n; i++)
      for(int j = i + 1; j <= n; j++){
        if(s[j - 1] > s[j]) f = 0;

        if(!f)
          res[mp[s[i]]][mp[s[j]]] = '0',
          res[mp[s[j]]][mp[s[i]]] = '1';
      }

  }

  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++)
      cout << res[i][j];
    cout << '\n';
  }
  return 0;
}
