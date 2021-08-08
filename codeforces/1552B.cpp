#include<bits/stdc++.h>
using namespace std;

int r[50001][6], pos[50001], n;

bool cmp(int *a, int *b){
  int c = 0;
  for(int i = 1; i <= 5; i++)
    c += (a[i] < b[i]);
  return c >= 3;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int t;
  for(cin >> t; t--; ) {
    cin >> n;

    for(int i = 1; i <= n; i++)
      for(int j = 1; j <= 5; j++)
        cin >> r[i][j],
        pos[i] = i;

    sort(pos + 1, pos + 1 + n, [](int x, int y){
      return cmp(r[x], r[y]);
    });

    int cc = 0;
    for(int i = 2; i <= n; i++)
      if(cmp(r[pos[1]], r[pos[i]])) ++cc;

    cout << (cc + 1 == n ? pos[1] : -1) << '\n';
  }
}

