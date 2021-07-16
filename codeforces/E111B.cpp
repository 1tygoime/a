#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  for(cin >> t; t--; ){
    int n, a, b;
    string s;

    cin >> n >> a >> b >> s;

    int change = 0;
    s.push_back('9');
    for(int i = 1; i <= n; i++)
      change += (s[i] != s[i - 1]);

    cout << (b >= 0 ? (a + b) * n : a * n + (b * (change / 2 + 1))) << '\n';
  }
  return 0;
}
