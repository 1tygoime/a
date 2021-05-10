#include <bits/stdc++.h>
using namespace std;

int n, b[100005], f[100005], a[100005], m = 1;

void trace(){
  vector <int> T;
  for(int i = n; i > 0; i--)
    if(f[i] == m)
      T.push_back(a[i]),
      m--;
  for(int i = (int)T.size() - 1; i >= 0; i--) cout << T[i] << " ";
}

int main() {
  cin >> n;
  for(int i = 1; i <= n; i++) cin >> a[i];
  f[1] = 1, b[1] = a[1];
  for(int i = 2; i <= n; i++){
    f[i] = lower_bound(b + 1, b + m + 1, a[i]) - b;
    m = max(m, f[i]);
    b[f[i]] = a[i];
  }
  cout << m << "\n";
  #ifndef ONLINE_JUDGE
  trace();
  #endif // ONLINE_JUDGE
}
