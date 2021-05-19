#include <bits/stdc++.h>
using namespace std;

int a[100005], b[100005], x, n;

int main(){
  cin >> n;
  for(int i = 1; i <= n; i++) cin >> a[i];
  b[1] = a[n]; int m = 1;
  for(int i = n - 1; i >= 1; i--){
    int k = lower_bound(b + 1, b + m + 1, a[i]) - b;
    m = max(m, k);
    b[k] = a[i];
  }
  cout << m;
}
