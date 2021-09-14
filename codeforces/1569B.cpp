#include<bits/stdc++.h>
using namespace std;

char res[55][55];
vector<int> saved;

void solve(){
  int n;
  cin >> n;

  string s;
  cin >> s;
  s = ' ' + s;

  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= n; j++)
      res[i][j] = 'X';
  saved.clear();

  for(int i = 1; i <= n; i++)
    if(s[i] == '2')
      saved.push_back(i);

  if(saved.size() >= 1 && saved.size() <= 2){
    cout << "NO\n";
    return;
  }

  cout << "YES\n";

  int last = -1;
  for(int i = 0; i < saved.size(); i++)
    res[saved[i]][saved[(i + 1) % saved.size()]] = '+',
    res[saved[(i + 1) % saved.size()]][saved[i]] = '-';

  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
      if(i == j)
        cout << res[i][j];
      else{
        if(s[i] == '1') cout << '=';
        else if(s[j] == '1') cout << '=';
        else if(res[i][j] == 'X') cout << '=';
        else cout << res[i][j];
      }
    }
    cout << '\n';
  }
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int t;
  for(cin >> t; t--; )
    solve();

  return 0;
}
