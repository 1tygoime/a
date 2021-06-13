#include <bits/stdc++.h>
using namespace std;

vector <pair <int, int>> v;
int n;

bool cmp(const pair <int, int> &a, const pair <int, int> &b){
  return a.second < b.second;
}

int main(){
  for(cin >> n; n--; ){
    int x, y;
    cin >> x >> y;
    v.push_back({x, y});
  }

  sort(v.begin(), v.end(), cmp);
  int ending = -1, res = 0;
  for(const auto &[x, y] : v){
    if(ending <= x) res++, ending = y;
  }

  cout << res;
}
