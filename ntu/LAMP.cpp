#include<bits/stdc++.h>
using namespace std;

#define u first
#define v second

const int MAX = 1e5 + 5;

map<pair<int, int>, bool> e;

int r[MAX];

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, m;
  cin >> n >> m;

  long long tri = 1LL * n * (n - 1) * (n - 2) / 6;

  while(m--){
    int u, v;
    cin >> u >> v;

    if(u > v) swap(u, v);

    //g - r
    if(!e[{u, v}]){
      tri -= n - 2 - r[u] - r[v];
      r[u]++, r[v]++;

      e[{u, v}] = 1;
    }

    //r - g
    else{
      r[u]--, r[v]--;
      tri += n - 2 - r[u] - r[v];

      e[{u, v}] = 0;
    }

    cout << tri << '\n';
  }

  return 0;
}
