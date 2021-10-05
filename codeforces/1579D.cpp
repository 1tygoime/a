#include<bits/stdc++.h>
using namespace std;

int a[100001];

void orz_HuuDuc(){
  int n;
  cin >> n;

  priority_queue<pair<int, int>> pq;
  vector<pair<int, int>> res;

  for(int i = 1; i <= n; i++){
    cin >> a[i];
    if(a[i] == 0) continue;
    pq.push({a[i], i});
  }

  while(pq.size() > 1){
    auto [per1, ind1] = pq.top();
    pq.pop();

    auto [per2, ind2] = pq.top();
    pq.pop();

    res.push_back({ind1, ind2});
    per1--;
    per2--;

    if(per1 != 0)
      pq.push({per1, ind1});
    if(per2 != 0)
      pq.push({per2, ind2});
  }

  cout << res.size() << '\n';

  for(auto [u, v]: res)
    cout << u << ' ' << v << '\n';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  for(cin >> t; t--;) orz_HuuDuc();
}
