#include<bits/stdc++.h>
using namespace std;

const int N = 105;

int a[N][N];
bool vst[N];

int main(){
  int n;
  cin >> n;

  for(int i = 0; i <= n; i++)
    a[0][i] = a[i][0] = 1e9;

  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= n; j++)
      cin >> a[i][j],
      a[i][j] = (a[i][j] ? a[i][j] : 1e9);

  for(int k = 1; k <= n; k++)
    for(int i = 1; i <= n; i++)
      for(int j = 1; j <= n; j++)
        a[i][j] = min(a[i][j], a[i][k] + a[k][j]);

  int st = 1, en = n, res = 0;
  vst[st] = 1;

  while(st != en){
    int nxt = 0;

    for(int i = 2; i < n; i++)
      if(!vst[i] && a[st][i] < a[st][nxt])
        nxt = i;

    if(!nxt) break;

//    cout << nxt << endl;

    res += a[st][nxt];
    st = nxt;
    vst[nxt] = 1;
  }

  cout << res + a[st][en];
}
