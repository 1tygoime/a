#include <bits/stdc++.h>
using namespace std;

vector <pair <int, int>> v;
int n;

int main(){
  for(cin >> n; n--; ){
    int x, y;
    cin >> x >> y;
    v.push_back({x, 1}); // arrive
    v.push_back({y, -1}); // leave;
  }

  sort(v.begin(), v.end());
  int res = 0, curr = 0;
  for(const auto &[x, y]: v)
    curr += y, res = max(res, curr);

  cout << res;
}
