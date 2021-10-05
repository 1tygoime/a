#include <bits/stdc++.h>
using namespace std;

long long n, k;
vector<long long> v;

int main()
{
  cin >> n >> k;
  for (long long i = 1; i * i <= n; i++)
    if (n % i == 0)
    {
      v.push_back(i);
      if (i != n / i)
        v.push_back(n / i);
    }
  sort(v.begin(), v.end());
  if (v.size() < k)
    cout << -1;
  else
    cout << v[--k];
}
