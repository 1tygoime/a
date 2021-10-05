#include<bits/stdc++.h>
using namespace std;

int c[3];

void orz_HuuDuc(){
  string s;
  cin >> s;

  memset(c, 0, sizeof(c));

  for(const char x: s)
    c[x - 'A']++;

  if(c[0] + c[2] == c[1])
    cout << "YES\n";
  else
    cout << "NO\n";
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int t;
  cin >> t;

  while(t--)
    orz_HuuDuc();

  return 0;
}
