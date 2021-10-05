#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n;
  while (cin >> n)
  {
    int res = n;
    while (n >= 3)
    {
      int a = n / 3, b = n % 3;
      res += a,
          n = a + b;
    }
    cout << res + (n == 2) << '\n';
  }
  return 0;
}
