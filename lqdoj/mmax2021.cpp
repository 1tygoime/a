#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
  cin >> n;
  vector <long long> a(n);
  for(long long &i: a) cin >> i;
  sort(a.begin(), a.end());

  long long res = max(a[0] * a[1], a[n - 2] * a[n - 1]);
  res = max(res, a[0] * a[1] * a[n - 1]);
  res = max(res, a[n - 1] * a[n - 2] * a[n - 3]);

  cout << res;
}
