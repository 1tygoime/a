#include<bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;

struct dsu{
  int p[MAX];

  dsu() {
    memset(p, -1, sizeof(p));
  }

  int find_set(int u){
    return p[u] < 0 ? u : p[u] = find_set(p[u]);
  }

  bool union_set(int u, int v){
    if((u = find_set(u)) == (v = find_set(v))) return 0;
    if(p[v] < p[u]) swap(u, v);

    p[u] += p[v];
    p[v] = u;
    return 1;
  }
} d;

int x[MAX], y[MAX], id[MAX];
bool ban[MAX];

int main(){
  int n, m, q;
  cin >> n >> m >> q;
  int curr = n;

  for(int i = 1; i <= m; i++) cin >> x[i] >> y[i];
  for(int i = 1; i <= q; i++) {
    cin >> id[i];
    ban[id[i]] = 1;
  }

  for(int i = 1; i <= m; i++)
    if(!ban[i] && d.union_set(x[i], y[i]))
      curr--;

  //cout << curr << endl;

  vector<int> res;
  for(int i = q; i >= 1; i--){
    res.push_back(curr);

    if(d.union_set(x[id[i]], y[id[i]])) --curr;
  }

  for(int i = (int)res.size() - 1; i >= 0; i--) cout << res[i] << '\n';
}
