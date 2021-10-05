//https://vnoi.info/wiki/algo/graph-theory/Depth-First-Search-Tree.md

#include<bits/stdc++.h>
using namespace std;

const int N = 105 * 105;

int m, n;
char a[N];
int val[N];
#define get(i, j) ((i - 1) * n + j)

bool in(int u, int v){
  return u >= 1 && u <= m && v >= 1 && v <= n;
}

void input(){
  cin >> m >> n;

  for(int i = 1; i <= m; i++)
    for(int j = 1; j <= n; j++){
      int curr_cell = get(i, j);

      cin >> a[curr_cell];

      if(isdigit(a[curr_cell]))
        val[curr_cell] = a[curr_cell] - '0';
    }
}


int low[N], num[N], timeDFS, done[N];
int cnt_scc, scc[N];
int total_cost[N];
vector<int> adj[N];
stack<int> st;

void buildGraph(){
  for(int i = 1; i <= m; i++)
    for(int j = 1; j <= n; j++){
      int u = get(i, j);

      if(a[u] == '#')
        continue;

      int v1 = in(i, j + 1) ? get(i, j + 1) : -1;
      if(v1 != -1 && a[v1] != '#')
        adj[u].push_back(v1);

      int v2 = in(i + 1, j) ? get(i + 1, j) : -1;
      if(v2 != -1 && a[v2] != '#')
        adj[u].push_back(v2);

      int v3 = in(i - 1, j) ? get(i - 1, j) : -1;
      if(v3 != -1 && a[v3] != '#' && a[u] == 'N')
        adj[u].push_back(v3);

      int v4 = in(i, j - 1) ? get(i, j - 1) : -1;
      if(v4 != -1 && a[v4] != '#' && a[u] == 'W')
        adj[u].push_back(v4);
    }
}

void dfs(int u){
  num[u] = low[u] = ++timeDFS;
  done[u] = 1;
  st.push(u);

  for(int v: adj[u])
    if(done[v] == 1)
      low[u] = min(low[u], num[v]);
    else if(done[v] == 0){
      dfs(v);
      low[u] = min(low[u], low[v]);
    }

  if(low[u] >= num[u]){
    cnt_scc++;
    int v;
    do{
      v = st.top();
      st.pop();
      done[v] = 2;
      scc[v] = cnt_scc;
      total_cost[cnt_scc] += val[v];
    } while(v != u);
  }
}

void findSCC(){
  for(int i = 1; i <= m; i++)
    for(int j = 1; j <= n; j++){
      int cur_ceil = get(i, j);

      if(done[cur_ceil]) continue;
      if(a[cur_ceil] == '#') continue;

      dfs(cur_ceil);
    }
}

vector<int> g[N];
int dp[N];

void buildNewGraph(){
  for(int i = 1; i <= m; i++)
    for(int j = 1; j <= n; j++){
      int u = get(i, j);

      if(a[u] == '#') continue;

      for(int v: adj[u])
        if(scc[u] != scc[v])
          g[scc[u]].push_back(scc[v]);
    }
}

void dfs1(int u){
  done[u] = 1;

  if(g[u].empty())
    dp[u] = total_cost[u];

  for(int v: g[u]){
    if(!done[v])
      dfs1(v);
    dp[u] = max(dp[u], dp[v] + total_cost[u]);
  }
}


int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

//  freopen("kcollect.inp", "r", stdin);
//  freopen(".out", "w", stdout);

  input();
  buildGraph();

  findSCC();
  buildNewGraph();

  memset(done, 0, sizeof(done));

  int st = get(1, 1);
  st = scc[st];
  dfs1(st);

  cout << dp[st];

  return 0;
}
