#include<bits/stdc++.h>
using namespace std;


int main(){
  int n, x, y;
  cin >> n >> x >> y;

  long long l = 0, r = max(x, y) * n, res = 0;
  while(l <= r){
    long long m = (l + r) / 2;

    if(m / x + m / y >= (n - 1))
      res = m, r = m - 1;
    else
      l = m + 1;
  }

  cout << res + min(x, y);
}
