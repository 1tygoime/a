#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, a, b;
  while (cin >> n >> a >> b)
  {
    int res = 0;
    for (int i = a; i < n; i++)
      if (n - i - 1 <= b)
        res++;
    cout << res << '\n';
  }
  return 0;
}
