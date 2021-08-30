#include<bits/stdc++.h>
using namespace std;

long long a, b, k;

int main(){
  cin >> a >> b >> k;

  long long l = cbrt(a) - 1, r = cbrt(b) + 1;

  long long res = 0;
  //for y
  for(; l <= r; ++l){
    if(l * l * l < a || l * l * l > b) continue;

    //count suitable x

    long long left  = max(a, l * l * l - k),
              right = min(b, l * l * l + k);

    res += (long long)sqrt(right) - (long long)sqrt(left - 1);
  }

  cout << res;

  return 0;
}
