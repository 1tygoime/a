#include<bits/stdc++.h>
using namespace std;

const int N = 3e5 + 5;

long long a[N], b[N];

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin >> n;

  for(int i = 1; i <= n; i++)
    cin >> a[i],
    a[i] += a[i - 1];

  int m;
  cin >> m;

  for(int i = 1; i <= m; i++)
    cin >> b[i],
    b[i] += b[i - 1];

  int i = 1, j = 1, res = 0;
  while(i <= n || j <= m)
    if(a[i] == b[j])
      res++,
      i++,
      j++;
    else if(a[i] < b[j])
      i++;
    else
      j++;

  cout << (a[n] == b[m] ? res : -1);

  return 0;
}
