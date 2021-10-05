#include <bits/stdc++.h>
using namespace std;

int k, n, m, cnt;

void Try(int i, int curr)
{
  if (i >= k)
  {
    cnt++;
    return;
  }
  for (int j = curr; j >= m; j--)
    Try(i + 1, j);
}

int main()
{
  cin >> m >> n >> k;
  for (int i = n; i >= m; i--)
    Try(1, i);
  cout << cnt;
}
