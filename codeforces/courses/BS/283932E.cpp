#include<bits/stdc++.h>
using namespace std;

#define ld long double

const ld eps = 1e-9;

int main(){
  ld c;
  cin >> c;

  ld l = 0, r = c;
  while(abs(r - l) > eps){
    ld m = (l + r) / 2;

    if(abs(m * m + sqrt(m) - c) <= eps){
      cout << setprecision(6) << fixed << m;
      return 0;
    }

    else if(m * m + sqrt(m) < c)
      l = m;

    else r = m;
  }

  if(abs(l * l + sqrt(l) - c) <= eps)
    cout << l;
}
