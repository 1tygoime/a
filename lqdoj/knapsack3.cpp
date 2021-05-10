#include <bits/stdc++.h>
using namespace std;

#define ll long long
pair <ll, ll> a[20];
vector <int> v, res;
ll m, max_val; int n;

void Try(int i, ll val, ll weight){
  if(weight > m) return;
  if(i >= n){
    if(val > max_val) max_val = val, res = v;
    return;
  }
  Try(i + 1, val, weight);
  v.push_back(i);
  Try(i + 1, val + a[i].second, weight + a[i].first);
  v.pop_back();
}

int main(){
  cin >> n >> m;
  for(int i = 0; i < n; i++) cin >> a[i].first >> a[i].second;
  Try(0, 0, 0);
  cout << res.size() << '\n';
  for(const int &i : res) cout << i + 1 << ' ';
  return 0;
}
