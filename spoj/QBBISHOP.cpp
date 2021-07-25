#include<bits/stdc++.h>
using namespace std;

#define x first
#define y second

const int dx[] = {-1, +1, -1, +1},
          dy[] = {-1, -1, +1, +1};

int n, m, d[201][201]; bool ban[201][201];
pair<int, int> src, dest;

bool in(int u, int v){
  return u >= 1 && u <= n && v >= 1 && v <= n;
}

int main(){
  cin >> n >> m >> src.x >> src.y >> dest.x >> dest.y;

  while(m--){
    int u, v;
    cin >> u >> v;
    ban[u][v] = 1;
  }

  if(ban[dest.x][dest.y]) return !(cout << -1);

  queue<pair<int, int>> q;
  q.push(src);

  while(!q.empty()){
    auto t = q.front(); q.pop();

    if(t == dest) return !(cout << d[dest.x][dest.y]);


      for(int i = 0; i < 4; i++)
        for(int j = 1;; j++){
        int u = t.x + j * dx[i], v = t.y + j * dy[i];

        if(!in(u, v)) break;
        if(ban[u][v]) break;

        if(!d[u][v])
          d[u][v] = d[t.x][t.y] + 1,
          q.push({u, v});
      }
  }

  cout << (d[dest.x][dest.y] ? d[dest.x][dest.y] : -1);

}
