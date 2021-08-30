#include<bits/stdc++.h>
using namespace std;


int main(){
  unsigned long long w, h, n;
  cin >> w >> h >> n;

  unsigned long long l = 0, r = max(w, h) * n, res = -1;
  while(l <= r){
    long long m = (l + r) / 2;

    if((m / w) * (m / h) < n)
      l = m + 1;

    else
      res = m, r = m - 1;
  }

  cout << res;

  return 0;
}
