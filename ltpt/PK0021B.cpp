#include <bits/stdc++.h>
using namespace std;

int n, k;

int main()
{
  cin >> n >> k;

  int i = 1, s = k, sp = k;
  for (i = 1; s < n; i++)
    sp <<= 1, s += sp;

  cout << i;
  return 0;
}
