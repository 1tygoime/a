#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

int vst[N], low[N], num[N], cnt_scc, timeDFS, save_s = -1, save_t = -1;
stack<int> st;
vector<int> adj[N];

void tarjan(int u){
  low[u] = num[u] = ++timeDFS;
  vst[u] = 1;
  st.push(u);

  for(int v: adj[u])
    if(vst[v] == 1)
      low[u] = min(low[u], num[v]);
    else if(vst[v] == 0){
      tarjan(v);
      low[u] = min(low[u], low[v]);
    }

  if(low[u] >= num[u]){
    if(save_s == -1) save_s = u;
    else if(save_t == -1) save_t = u;

    ++cnt_scc;
    int v;

    do{
      v = st.top();
      vst[v] = 2;
      st.pop();
    } while(v != u);
  }
}

void dfs(int u){
  vst[u] = 1;
  if(u == save_t) return;

  for(int v: adj[u])
    if(!vst[v]) dfs(v);
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

//  cout << cnt_scc << endl;

  if(cnt_scc == 1)
    return cout << "YES", 0;

  cout << "NO\n";

  memset(vst, 0, sizeof(vst));
  dfs(save_s);

  if(vst[save_t])
    swap(save_t, save_s);

  cout << save_s << ' ' << save_t;

  return 0;
}
