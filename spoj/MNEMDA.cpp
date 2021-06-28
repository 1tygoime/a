#include <bits/stdc++.h>
using namespace std;

int m, n, k, b[8000001], s[8000001];

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  //prepare
  cin >> m >> n >> k;

  for(int i = 1; i <= m; i++){
    int x;
    cin >> x;

    string s = "";
    while(x) s = char((x & 1) + '0') + s, x >>= 1;
    while(s.size() < 8) s = '0' + s;

    for(int j = 0; j < (int)s.size(); j++) b[(i - 1) * 8 + j + 1] = s[j] - '0';
  }

  //query 1
  while(n--){
    int c, p, d, q;
    cin >> c >> p >> d >> q;

    p = 8 - p, q = 8 - q;
    s[c * 8 + p]++, s[d * 8 + q + 1]--;
  }

  for(int i = 1; i <= 8 * m; i++){
    s[i] += s[i - 1];

    if(s[i] > 0)
      b[i] = (b[i] ? !b[i] : b[i]);

    b[i] += b[i - 1];
  }

  //query 2
  while(k--){
    int c, p, d, q;
    cin >> c >> p >> d >> q;

    p = 8 - p, q = 8 - q;
    int r = b[d * 8 + q], l = b[c * 8 + p - 1];
    cout << (r - l > 0 ? "YES" : "PASS") << '\n';
  }

}

