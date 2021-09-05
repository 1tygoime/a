#include<bits/stdc++.h>
using namespace std;

#define dbg(x) cerr << #x << " = " << x << endl

const int N = 105,
          K = 26;

char a[N][N];
int c1[K], c2[K];

int add(int u, int v, int col, int *c){
  int cnt = 0;

  for(int i = u; i <= v; i++)
    cnt += c[a[i][col] - 'A'] == 0,
//    cout<<a[i][col]<<' ',
    c[a[i][col] - 'A']++;

  return cnt;
}

int addTmp(int u, int v, int col, int *c){
  vector<int> c_tmp(c, c + K);

  int cnt = 0;

  for(int i = u; i <= v; i++)
    cnt += c_tmp[a[i][col] - 'A'] == 0,
//    cout<<a[i][col]<<' ',
    c_tmp[a[i][col] - 'A']++;

  return cnt;
}

int del(int u, int v, int col, int *c){
  int cnt = 0;

  for(int i = u; i <= v; i++)
    cnt += c[a[i][col] - 'A'] == 1,
    c[a[i][col] - 'A']--;

  return cnt;
}

int main(){
//  freopen("a.inp", "r", stdin);

  int m, n, k;
  cin >> m >> n >> k;

  for(int i = 1; i <= m; i++)
    for(int j = 1; j <= n; j++)
      cin >> a[i][j];

  long long res = 0;

  for(int u = 1; u <= m; u++)
    for(int v = u; v <= m; v++){
      memset(c1, 0, sizeof(c1));
      memset(c2, 0, sizeof(c2));

      int dist1 = 0, dist2 = 0;

      for(int l = 1, r = 1, first_r = 1; l <= n; l++){
        while(first_r <= n && dist1 + addTmp(u, v, first_r, c1) < k){
          dist1 += add(u, v, first_r, c1);
          ++first_r;
        }

        while(r <= n && dist2 + addTmp(u, v, r, c2) <= k)
          dist2 += add(u, v, r, c2),
          ++r;

        res += r - first_r;

        dist1 -= del(u, v, l, c1);
        dist2 -= del(u, v, l, c2);
      }
    }

  cout << res;
}
