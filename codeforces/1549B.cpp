#include<bits/stdc++.h>
using namespace std;

int a[200005];

void solve(){
  int n; string s1, s2;
  cin >> n >> s1 >> s2;
  s1 = ' ' + s1 + ' ', s2 = ' ' + s2 + ' ';

  for(int i = 0; i <= n + 2; i++) a[i] = 0;

  for(int i = 1; i <= n; i++){
    a[i] = a[i - 1];
    if(s1[i] == '0' && s2[i] == '1')
      a[i] = max(a[i], a[i - 1] + 1);

    if(i <= 1) continue;

    if(s2[i] == '1' && s1[i - 1] == '1')
      a[i] = max(a[i], a[i - 2] + 1);
    if(s2[i - 1] == '1' && s1[i] == '1')
      a[i] = max(a[i], a[i - 2] + 1);

    if(s2[i] == s2[i - 1] && s2[i] == '1' && s1[i] == s1[i - 1] && s1[i] == '1')
      a[i] = max(a[i], a[i - 2] + 2);

//    if(i >= 2 && s2[i] == '1' && s1[i - 1] == '1')
  }

  cout << a[n] << '\n';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int t;
  for(cin >> t; t--; ) solve();
}
