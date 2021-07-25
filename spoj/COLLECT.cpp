#include<bits/stdc++.h>
using namespace std;

struct state{
  int z, s, m, c = 0;

  bool operator <(const state &i) const{
    if(z != i.z) return z < i.z;
    if(s != i.s) return s < i.s;
    return m < i.m;
  }
};

int k;
bool visited[5][5][5];
vector<pair<state, state>> v; vector<state> res;
state src, ok, t[2];

int main(){
  cin >> k >> src.z >> src.s >> src.m >> ok.z >> ok.s >> ok.m;

  while(cin >> t[0].z >> t[0].s >> t[0].m){
    cin >> t[1].z >> t[1].s >> t[1].m;

    v.push_back({t[0], t[1]});
  }

  visited[src.z][src.s][src.m] = 1;
  queue<state> q; q.push(src);

  while(!q.empty()){
    state t = q.front(); q.pop();

    if(t.z >= ok.z && t.s >= ok.s && t.m >= ok.m){
      res.push_back(t);
      continue;
    }

    for(const auto &[x, y]: v)
      if(t.z >= x.z && t.s >= x.s && t.m >= x.m && t.c <= k - 1){
        state tmp = {t.z - x.z + y.z,
                     t.s - x.s + y.s,
                     t.m - x.m + y.m,
                     t.c + 1};

        if(tmp.z <= 4 && tmp.s <= 4 && tmp.m <= 4 && !visited[tmp.z][tmp.s][tmp.m])
          visited[tmp.z][tmp.s][tmp.m] = 1,
          q.push(tmp);
      }
  }

  if(res.empty()) return !(cout << -1);

  cout << res.size() << '\n';
  sort(res.begin(), res.end());
  for(const auto &[z, s, m, c] : res)
    cout << z << ' ' << s << ' ' << m << ' ' << c << '\n';
}
