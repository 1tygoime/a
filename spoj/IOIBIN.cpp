#include<bits/stdc++.h>
using namespace std;

int n, p[10001];

void makeset(){
  memset(p, -1, sizeof(p));
}

int findset(int u){
  return p[u] < 0 ? u : p[u] = findset(p[u]);
}

void unionset(int u, int v){
  if((u = findset(u)) == (v = findset(v))) return;

  if(p[v] < p[u]) swap(u, v);

  p[u] += p[v];
  p[v] = u;
}

int main(){
  cin >> n;
  makeset();

  for(int x, y, r; cin >> x >> y >> r; ){
    if(r == 1) unionset(x, y);
    else cout << (findset(x) == findset(y)) << '\n';
  }
}
