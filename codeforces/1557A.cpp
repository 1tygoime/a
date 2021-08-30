#include<bits/stdc++.h>
using namespace std;

int a[100001];

void solve(){
  int n;
  cin >> n;

  for(int i = 1; i <= n; i++)
    cin >> a[i];

  sort(a + 1, a + 1 + n, greater<int>());

  long long s = accumulate(a + 1, a + 1 + n, 0LL);

  cout << setprecision(8) << fixed <<  1.0 * a[1] + 1.0 * (s - a[1]) / (n - 1) << '\n';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int t;
  for(cin >> t; t--; ) solve();
}
