#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

int a[N], b[N];

int main(){
  int n;
  long long x, y;
  cin >> n >> x >> y;

  for(int i = 1; i <= n; i++)
    cin >> a[i] >> b[i];

  sort(a + 1, a + 1 + n);
  sort(b + 1, b + 1 + n);

  long long res = 0;
  for(int i = 1; i <= n; i++)
    if(a[i] < b[i])
      res += 1LL * x * (b[i] - a[i]);
    else
      res += 1LL * y * (a[i] - b[i]);

  cout << res;

  return 0;
}
