#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

int a[N];
long long s[N];
map<int, vector<int>> mp;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int n;
  cin >> n;

  for(int i = 1; i <= n; i++)
    cin >> a[i],
    s[i] = s[i - 1] + a[i],
    mp[a[i]].push_back(i);

  long long res = -1e18, mn = 1e18;
  for(auto [x, y] : mp){
//    cout << x << ":";

    mn = 1e18;

    if(y.size() <= 1)
      continue;

//    cout << x << ":";

    for(int i: y){
//      cout << i << ",";
      res = max(res, s[i] - mn);
      mn = min(mn, s[i - 1]);
    }
  //    cout << endl;
  }

  cout << res;
  return 0;
}
