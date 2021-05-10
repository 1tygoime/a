#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n, res, U, V;
pair <ll, ll> a[40];
map <pair <ll, ll>, int> cnt;
bool c;

void Try(int i, int sz, int x, int y){
  if(i >= sz){
    if(!c) cnt[{x, y}]++;
    else{
      ll x_tmp = U - x, y_tmp = V - y;
      if(cnt.count({x_tmp, y_tmp})) res += cnt[{x_tmp, y_tmp}];
    }
    return;
  }
  Try(i + 1, sz, x, y);
  Try(i + 1, sz, x + a[i].first, y + a[i].second);
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> n;
  for(int i = 0; i < n; i++)
    cin >> a[i].first >> a[i].second;
  cin >> U >> V;

  int k = n / 2;
  Try(0, k, 0, 0);
  c = 1;
  Try(k, n, 0, 0);
  cout << res;

  return 0;
}
