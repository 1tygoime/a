#include<bits/stdc++.h>
using namespace std;

const int MAX = 10001;

set<int> adj[MAX];
int c[MAX], d[MAX];

int main(){
  int n, m, s;
  cin >> n >> m >> s;

  while(m--){
    int u, v;
    cin >> u >> v;

    adj[u].insert(v);
  }

  queue<int> q;
  q.push(s); c[s] = 1;

  while(!q.empty()){
    int u = q.front(); q.pop();

    for(const int &v: adj[u]){
      if(!c[v])
        d[v] = d[u] + 1,
        c[v] = c[u],
        q.push(v);
      else
        if(d[v] == d[u] + 1 && c[v] == 1) c[v] = 2;

    }
  }

  cout << count_if(c + 1, c + 1 + n, [](int i){return i == 2;});
}
