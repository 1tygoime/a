#include <bits/stdc++.h>
using namespace std;

long long x, s, s_min, res = -1e16;

int main()
{
  int n;
  for (cin >> n; n--;)
  {
    cin >> x;
    s += x;
    res = max(res, s - s_min);
    s_min = min(s, s_min);
  }
  cout << res;
  return 0;
}
