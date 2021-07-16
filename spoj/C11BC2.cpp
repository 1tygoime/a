#include<bits/stdc++.h>
using namespace std;

int n, m, c, t[10001];
vector<int> adj[10001];

void dfs(int u){
  t[u] = c;
  for(int v: adj[u])
    if(!t[v])
      dfs(v);
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  cin >> n >> m;
  for(int i = 2; i <= n; i++){
    int x, k;
    cin >> x >> k;
    if(k == 2) continue;

    adj[i].push_back(x);
    adj[x].push_back(i);
  }

  for(int i = 1; i <= n; i++)
    if(!t[i]){
      c++;
      dfs(i);
    }

  while(m--){
    int x, y;
    cin >> x >> y;
    cout << (t[x] == t[y] ? "NO" : "YES") << '\n';
  }

  return 0;
}
