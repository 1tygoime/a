#include<bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;

long long pw(long long a, long long n){
  if(!n)
    return 1;

  long long t = pw(a, n / 2);
  t = (t * t) % mod;

  return n & 1 ? (t * a) % mod
               : t;
}

int main(){
  long long n, m;
  cin >> n >> m;

  cout << pw((pw(2, m) - 1 + mod) % mod, n);
}
