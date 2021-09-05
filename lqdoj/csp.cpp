#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;

int a[N];

int main(){
  int n, m;
  cin >> n >> m;

  for(int i = 1; i <= n; i++)
    cin >> a[i];

  sort(a + 1, a + 1 + n);

  long long res = 0;

  int i = 1, j = n;

  while(i < j)
    if(a[i] + a[j] <= m)
      res += j - i,
      ++i;
    else
      --j;

  cout << res;

  return 0;
}
