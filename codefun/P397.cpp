#include <bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;

int main()
{
  int n, m;
  cin >> n >> m;
  n = __gcd(n, m);
  if (n == 1 || n == 2)
  {
    cout << 1;
    return 0;
  }
  long long a1 = 1, a2 = 1, a3;
  for (int i = 3; i <= n; i++)
    a3 = (a1 + a2) % mod, a1 = a2, a2 = a3;
  cout << a3;
}
