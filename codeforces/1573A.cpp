#include<bits/stdc++.h>
using namespace std;

void orz_hd(){
  int n;
  string s;
  cin >> n >> s;

  s = ' ' + s;

  int res = 0;

  for(int i = 1; i <= n; i++)
    res += s[i] - '0' + (s[i] != '0');

  if(s[n] != '0') --res;
  cout << res << '\n';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int orzz;
  cin >> orzz;

  while(orzz--)
    orz_hd();

  return 0;
}
