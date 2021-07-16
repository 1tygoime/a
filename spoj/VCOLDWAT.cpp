#include<bits/stdc++.h>
using namespace std;

const int MAX = 1e5;

vector<int> adj[MAX];
int n, c, d[MAX];
queue<int> q;

int main(){
  cin >> n >> c;

  for(int i = 1; i <= c; i++){
    int e, b1, b2;
    cin >> e >> b1 >> b2;

    adj[e].push_back(b1);
    adj[e].push_back(b2);
  }

  q.push(1), d[1] = 1;
  while(!q.empty()){
    int u = q.front(); q.pop();

    for(int v: adj[u])
      if(!d[v]){
        d[v] = d[u] + 1;
        q.push(v);
      }
  }

  for(int i = 1; i <= n; i++) cout << d[i] << '\n';

  return 0;
}
