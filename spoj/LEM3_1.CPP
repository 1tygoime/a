#include <bits/stdc++.h>
using namespace std;

int n, C[16][16];
bool visited[16];
long long res = LLONG_MAX, min_cost;

void Try(int i, int cur, long long s){
  if(s + min_cost * (n - i) >= res) return;
  for(int j = 0; j < n; j++)
    if(!visited[j] && C[cur][j]){
      visited[j] = 1;
      if(i == n - 1) res = min(res, s + C[cur][j]);
      else Try(i + 1, j, s + C[cur][j]);
      visited[j] = 0;
    }
}

void init(){
  for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++) if(C[i][j]) min_cost = min(min_cost, 1LL * C[i][j]);
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> n;
  for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++) cin >> C[i][j];
  init();
  for(int i = 0; i < n; i++){
//    memset(visited, 0, sizeof(visited));
    visited[i] = 1;
    Try(1, i, 0);
    visited[i] = 0;
  }
  cout << res;
}
