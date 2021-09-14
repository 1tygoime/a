#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  long double a, b;

  cin >> n >> a >> b;

  long double res = 1e18;

  for(int i = 1; i <= n; i++) {
    long double x, y, r;
    cin >> x >> y >> r;

    long double cur = sqrt((x - a) * (x - a) + (y - b) * (y - b));

    res = min(res, cur - r);
  }

  cout << (long long)res - (res == (long long)res);
}
