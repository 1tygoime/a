#include<bits/stdc++.h>
using namespace std;

int c[200005][26], k, n;
string s;

int get(int l, int r, char t){
  return c[r][t - 'A'] - c[l - 1][t - 'A'];
}

bool check(int l, int r){
  return (get(l, r, 'A') >= k && get(l, r, 'V') >= k && get(l, r, 'C') >= k);
}

int main(){
  cin >> k >> s;
  n = s.size();
  s = ' ' + s;

  for(int i = 1; i <= n; i++)
    for(char j : {'A', 'V', 'C'})
      c[i][j - 'A'] = c[i - 1][j - 'A'] + (s[i] == j);

  int res = 1e9;

  for(int i = 1, j = 1; i <= n; i++){
    while(j <= n && !check(i, j))
      ++j;

    if(!check(i, j)) continue;

    res = min(res, get(i, j, 'A') + get(i, j, 'V') + get(i, j, 'C') - 3 * k);
  }

  cout << res;

  return 0;
}
