#include <bits/stdc++.h>
using namespace std;

double a[15];
int d;

double f(double X){
  double res = 0.0, e = 1.0;
  for(int i = 0; i <= d; i++)
    res += a[i] * e,
    e *= X;
  return res;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> d;
  for(int i = 0; i <= d; i++) cin >> a[i];
  if(f(-1e6) > f(1e6))
    for(int i = 0; i <= d; i++) a[i] = -a[i];

  double L = -1e6, R = 1e6, M;
  while(abs(R - L) > 1e-12){
    M = (L + R) / 2;
    if(f(M) > 0) R = M;
    else L = M;
  }

  cout << (long long)(M * 1000);

  return 0;
}
