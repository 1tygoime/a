#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

int n, a[N], b[N];

int main(){
  cin >> n;

  for(int i = 1; i <= n; i++)
    cin >> a[i];

  for(int i = 1; i <= n; i++)
    cin >> b[i];

  sort(a + 1, a + 1 + n);
  sort(b + 1, b + 1 + n);

  int i = 1, j = n, res = INT_MAX;

  while(i <= n && j >= 1){
    if(res == 0)
      break;

    res = min(res, abs(a[i] + b[j]));

    if(a[i] + b[j] < 0) ++i;
    else --j;
  }

  cout << res;

  return 0;
}
