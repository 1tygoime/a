#include<bits/stdc++.h>
using namespace std;

const int N = 2005;

vector<int> adj[N];
int n, m, num[N], low[N], scc, scc1[N], vst[N], timeDFS;
stack<int> st;

void dfs(int u){
  num[u] = ++timeDFS,
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

vector<int> scc_In, scc_Out;
int degIn[N], degOut[N];

int main(){
  cin >> n >> m;
  for(int i = 1; i <= m; i++){
    int u, v;
    cin >> u >> v;

    adj[u].push_back(v);
  }

  for(int i = 1; i <= n; i++)
    if(!vst[i]) dfs(i);

  for(int u = 1; u <= n; u++)
    for(int v: adj[u])
      if(scc1[u] != scc1[v]){
        degIn[scc1[v]]++;
        degOut[scc1[u]]++;
      }

  for(int i = 1; i <= scc; i++){
    if(degIn[i] == 0) scc_In.push_back(i);
    if(degOut[i] == 0) scc_Out.push_back(i);
  }

  if(scc_In.size() != 1 && scc_Out.size() != 1)
    return cout << "NO", 0;

  cout << "YES\n";

  int st = scc_Out.front(), en = scc_In.front();

  for(int i = 1; i <= n; i++)
    if(scc1[i] == st){
      cout << i << ' ';
      break;
    }

  for(int i = 1; i <= n; i++)
    if(scc1[i] == en){
      cout << i;
      break;
    }

  return 0;
}
