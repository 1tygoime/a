#include<bits/stdc++.h>
using namespace std;

const int N = 1e4 + 5;

int low[N], num[N], scc[N], vst[N], cnts, timeDFS, degOut[N];
vector<int> adj[N];
stack<int> st;

void dfs(int u){
  low[u] = num[u] = ++timeDFS;
  vst[u] = 1;
  st.push(u);

  for(int v: adj[u])
    if(vst[v] == 1)
      low[u] = min(low[u], num[v]);
    else if(vst[v] == 0){
      dfs(v);
      low[u] = min(low[u], low[v]);
    }

  if(low[u] >= num[u]){
    int v;
    ++cnts;

    do{
      v = st.top();
      scc[v] = cnts;
      vst[v] = 2;
      st.pop();
    } while(v != u);
  }
}

int main(){
  int n, m, t;
  cin >> n >> m >> t;

  while(m--){
    int u, v;
    cin >> u >> v;

    adj[u].push_back(v);
  }

  for(int i = 1; i <= n; i++)
    if(!vst[i]) dfs(i);

  for(int u = 1; u<= n; u++)
    for(int v: adj[u])
      if(scc[u] != scc[v])
        degOut[scc[u]]++;

  int add = 0;
  for(int i = 1; i <= cnts; i++)
    if(degOut[i] > 0) continue;
    else if(scc[t] == i) continue;
    else ++add;

  cout << add;

  return 0;
}
