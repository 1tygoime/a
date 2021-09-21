#include <bits/stdc++.h>
using namespace std;

int n, m, w[101], v[101], a[101], dp[10001];
vector < pair <int,int> > items = { {-1, -1} };

int main(){
  cin >> n >> m;
  for(int i = 1; i <= n; i++) cin >> w[i] >> v[i] >> a[i];

  // i-th items
  for(int i = 1; i <= n; i++){
    for(int j = 0; a[i] - (1 << j) >= 0; j++){
      a[i] -= (1 << j);
      items.push_back({w[i] * (1 << j), v[i] * (1 << j)});
    }
    if(a[i] > 0) items.push_back({w[i] * a[i], v[i] * a[i]});
  }

  int num = (int)items.size() - 1;

  for(int i = 1; i <= num; i++)
    for(int j = m; j >= items[i].first; j--)
      dp[j] = max(dp[j], dp[j - items[i].first] + items[i].second);

  cout << dp[m];
  return 0;
}

