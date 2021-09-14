#include<bits/stdc++.h>
using namespace std;

long long calc(long long x){
  long long res = 0;
  for(x >>= 1; x > 0; x >>= 1)
    res += x;
  return res;
}

int main(){
  long long l, r;
  cin >> l >> r;

  cout << calc(r) - calc(l - 1);
}
