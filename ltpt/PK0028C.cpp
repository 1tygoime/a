#include <bits/stdc++.h>
using namespace std;

int n;
vector<pair<pair<int, int>, int>> v;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    int x, y;
    cin >> x >> y;
    v.push_back({{x, 1}, i});      //in
    v.push_back({{y + 1, -1}, i}); //out
  }

  sort(v.begin(), v.end());

  multiset<int> currp, maxp;
  int curr = 0, res = 0;

  for (const auto &i : v)
  {
    if (i.first.second == 1)
      curr++,
          currp.insert(i.second);

    else
      curr--,
          currp.erase(currp.find(i.second));

    if (res < curr)
      res = curr, maxp = currp;
  }

  cout << res << '\n';
  for (const int &i : maxp)
    cout << i << '\n';

  return 0;
}
