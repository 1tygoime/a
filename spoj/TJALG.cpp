#include<bits/stdc++.h>
using namespace std;

const int MAX = 1e4 + 5;

int scc, scc1[MAX], timeDFS, num[MAX], low[MAX], vst[MAX], n;
stack<int> st;
vector<int> adj[MAX];

void dfs(int u){
  num[u] = ++timeDFS;
  low[u] = n + 1;
  vst[u] = 1;
  st.push(u);

  for(int v: adj[u])
    if(vst[v] == 1)
      low[u] = min(low[u], num[v]);
    else if(!vst[v]){
      dfs(v);
      low[u] = min(low[u], low[v]);
    }

  if(low[u] >= num[u]){
    ++scc;
    int v;

    do{
      v = st.top();
      st.pop();
      vst[v] = 2;
      scc1[v] = scc;
    } while(v != u);
  }
}

int main(){
  int m;
  cin >> n >> m;

  for(int i = 1; i <= m; i++){
    int u, v;
    cin >> u >> v;

    adj[u].push_back(v);
  }

  for(int i = 1; i <= n; i++)
    if(!vst[i]) dfs(i);

  cout << scc;
  for(int i = 1; i <= scc; i++){
    cout << "SCC #" << i << ": ";
    for(int j = 1; j <= n; j++)
      if(scc1[j] == i) cout << j << ' ';
    cout << endl;
  }

  return 0;
}
