#include <bits/stdc++.h>
using namespace std;

int n, m, k, a[200005], b[200005], res;

int main(){
  cin >> n >> m >> k;
  for(int i = 0; i < n; i++) cin >> a[i];
  for(int i = 0; i < n; i++) cin >> b[i];

  sort(a, a + n);
  sort(b, b + n);
  for(int i = 0, j = 0; i < n && j < m; ){
    if(abs(a[i] - b[j]) <= k) res++, i++, j++;
    else if(a[i] - b[j] > k) j++;
    else i++;
  }

  cout << res;
}
