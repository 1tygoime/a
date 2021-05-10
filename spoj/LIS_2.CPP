#include <bits/stdc++.h>
using namespace std;

int n, b[100005], x, m = 1;

int main(){
  cin >> n >> b[1];
  for(int i = 2; i <= n; i++){
    cin >> x;
    int k = lower_bound(b + 1, b + m + 1, x) - b;
    m = max(m, k);
    b[k] = x;
  }
  cout << m;
}
