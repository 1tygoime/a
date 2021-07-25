#include<bits/stdc++.h>
using namespace std;

int a[21][21];

void ok(){
  int n, m;
  cin >> n >> m;
  memset(a, 0, sizeof(a));

  a[0][0] = a[n - 1][0] = a[0][m - 1] = a[n - 1][m - 1] = 1;

  for(int i = n % 2 ? 2 : 3; i < n; i += 2) a[i][0] = a[i][m - 1] = 1;

  for(int i = m % 2 ? 2 : 3; i < m; i += 2) a[0][i] = a[n - 1][i] = 1;

  for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++) cout << a[i][j] << (j == m - 1 ? "\n" : "");

  cout << '\n';
}

int main(){
  int t; cin >> t;
  while(t--) ok();
}
