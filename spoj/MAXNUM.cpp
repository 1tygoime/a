#include <bits/stdc++.h>
using namespace std;

int n, m, res = 1e9;

int main(){
  cin >> n >> m;

  for(int i = 2; i <= m; i++){
    if(m % i == 0){
      int cnt = 0;
      while(m % i == 0) m /= i, ++cnt;

      int cnt1 = 0;
      for(int nn = n; nn / i > 0; nn /= i) cnt1 += nn / i;

      res = min(res, cnt1 / cnt);
    }
  }

  cout << res;
}
