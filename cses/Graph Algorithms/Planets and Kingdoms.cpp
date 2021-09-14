#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

int low[N], num[N], vst[N], timeDFS, scc, scc1[N];
vector<int> adj[N];
stack<int> st;

void tarjan(int u){
  low[u] = num[u] = ++timeDFS;
  st.push(u);
  vst[u] = 1;

  for(int v: adj[u])
    if(vst[v] == 1)
      low[u] = min(low[u], num[v]);
    else if(vst[v] == 0){
      tarjan(v);
      low[u] = min(low[u], low[v]);
    }

  if(low[u] >= num[u]){
    int v;
    ++scc;

    do{
      v = st.top();
      st.pop();

      scc1[v] = scc;
      vst[v] = 2;
    } while(v != u);
  }
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int n, m;
  cin >> n >> m;

  while(m--){
    int u, v;
    cin >> u >> v;

    adj[u].push_back(v);
  }

  for(int i = 1; i <= n; i++)
    if(!vst[i])
      tarjan(i);

  cout << scc << '\n';
  for(int i = 1; i <= n; i++)
    cout << scc1[i] << ' ';

  return 0;
}
