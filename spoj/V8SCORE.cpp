#include <bits/stdc++.h>
using namespace std;

int s, n, k, a[21][21], x[21], s_tmp;

void prod(){
  cout << "YES\n";
  for(int i = 1; i <= k; i++) cout << x[i] << ' ';
  exit(0);
}

void Try(int i){
  for(int j = 1; j <= n; j++){
    if(a[j][i] >= x[i - 1] && s_tmp + a[j][i] * (k - i) <= s){
      x[i] = a[j][i];
      s_tmp += a[j][i];
      if(i == k){
        if(s_tmp == s) prod();
      }
      else Try(i + 1);
      s_tmp -= a[j][i];
    }
  }
}

int main(){
  cin >> s >> k >> n;
  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= k; j++) cin >> a[i][j];

  x[0] = -1;
  Try(1);
  cout << "NO";

  return 0;
}

/*
100 2 3
1 1
2 2
3 3
NO
*/

/*
100 3 2
30 20 40
50 30 50

YES
30 30 40
*/