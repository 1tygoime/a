#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e7 + 5;

int c, k, n;
bool hasDel[MAX];

int main()
{
  cin >> n >> k;

  for (int i = 2; i <= n; i++)
  {
    if (hasDel[i])
      continue;

    for (int j = i; j <= n; j += i)
    {
      if (!hasDel[j])
      {
        hasDel[j] = 1, ++c;
        if (c == k)
          return !(cout << j);
      }
    }
  }
}
