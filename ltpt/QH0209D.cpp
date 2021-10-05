#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
const ld eps = 1e-10;

ld a[1001];

int main()
{
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++)
    cin >> a[i];

  sort(a + 1, a + n + 1);

  int res = 0;

  //for a
  for (int i = 1; i <= n; i++)
    //for b
    for (int j = i + 1; j <= n; j++)
    {
      //find m

      int l = i + 1, r = j - 1;
      while (l <= r)
      {
        int m = (l + r) / 2;

        if (abs(a[m] - (a[i] + a[j]) / 2) < eps)
        {
          ++res;
          break;
        }

        else if (a[m] > (a[i] + a[j]) / 2 + eps)
          r = m - 1;
        else
          l = m + 1;
      }
    }

  cout << res;
}
