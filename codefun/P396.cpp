
#include <bits/stdc++.h>
using namespace std;

multiset<pair<int, int>> vis;
map<pair<int, int>, int> mp;

long long res;

int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x, y;
    cin >> x >> y;
    mp[{x, y}]++;
    //    if(!vis.count({x, y})) mp[x]++;
  }
  for (auto &it : mp)
    res += 1LL * it.second * (it.second - 1) / 2;
  cout << res;
}
