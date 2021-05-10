#include <bits/stdc++.h>
using namespace std;

#define LD long double
#define PI 2 * acos(0.0)
#define eps 1e-9

LD a[10005];

LD angle(LD a, LD b, LD c){
  return acos((b * b + c * c - a * a) / (2 * b * c));
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin >> n;
  LD L = 0, R = 0, M;

  for(int i = 0; i < n; i++){
    cin >> a[i];
    R += a[i];
  }

  //O1OO2+O2OO3+...+On-1OOn+OnOO1 = 2*pi
  while (abs(R - L) > eps){
    M = (R + L) / 2; LD sum = angle(a[0] + a[n - 1], a[0] + M, a[n - 1] + M);
    for(int i = 0; i < n - 1; i++) sum += angle(a[i] + a[i + 1], a[i] + M, M + a[i + 1]);
//    cout << sum << "\n";
    if(sum < 2 * PI) R = M;
    else L = M;
  }

  cout << setprecision(3) << fixed << M;
}
