#include <bits/stdc++.h>
using namespace std;

long long a[100005];

int main(){
  int n;
  cin >> n;
  for(int i = 1; i <= n; i++){
    cin >> a[i];
    a[i] += a[i - 1];
  }
  int q;
  for(cin >> q; q--; ){
    int x, y;
    cin >> x >> y;
    cout << a[y] - a[x - 1] << '\n';
  }
  return 0;
}
    