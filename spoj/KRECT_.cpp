#include<bits/stdc++.h>
using namespace std;

const int N = 105,
          K = 26;

char a[N][N];
int m, n, k, s[N][N][K];

int get(int u, int v, int x, int y, int c){
  return s[x][y][c] - s[u - 1][y][c] - s[x][v - 1][c] + s[u - 1][v - 1][c];
}

int dist(int u, int v, int x, int y){
  int c = 0;

  for(int i = 0; i < 26; i++)
    c += bool(get(u, v, x, y, i));

  return c;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> m >> n >> k;

  for(int i = 1; i <= m; i++)
    for(int j = 1; j <= n; j++){
      cin >> a[i][j];

      for(int k = 0; k < 26; k++)
        s[i][j][k] = s[i - 1][j][k] + s[i][j - 1][k] - s[i - 1][j - 1][k] + (a[i][j] - 'A' == k);
    }

  long long res = 0;

  for(int u = 1; u <= m; u++)
    for(int v = u; v <= m; v++){

      for(int l = 1, first_r = 1, last_r = 1; l <= n; l++){

        while(first_r <= n && dist(u, l, v, first_r) < k)
          ++first_r;

        while(last_r <= n && dist(u, l, v, last_r) <= k)
          ++last_r;

        res += last_r - first_r;
      }

    }

  cout << res;

  return 0;
}
