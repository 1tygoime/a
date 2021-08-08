#include<bits/stdc++.h>
using namespace std;

int n, m, curr;
set<int> f[200001];

void solve(){
  cin >> n >> m;
  for(int i = 1, u, v; i <= m; i++){
    cin >> u >> v;
    f[min(u, v)].insert(max(u, v));
  }

  curr = count_if(f + 1, f + 1 + n, [](set<int> s){return s.size() == 0;});

  int q;
  for(cin >> q; q--; ){
    int k;
    cin >> k;
    if(k == 3) cout << curr << '\n';

    else{
      int u, v;
      cin >> u >> v;

      int uu = min(u, v), vv = max(u, v);
      if(k == 1) curr -= f[uu].size() == 0, f[uu].insert(vv);
      else f[uu].erase(f[uu].find(vv)), curr += f[uu].size() == 0;
    }
  }
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int t;
  solve();
}
