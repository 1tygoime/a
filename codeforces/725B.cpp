#include <bits/stdc++.h>
using namespace std;

int n;
long long a[200010];

void solve(){
  int k = 0;

  cin >> n;
  for(int i = 1; i <= n; i++) cin >> a[i];

  bool allequal = 1;
  for(int i = 2; i <= n; i++) if(a[i] != a[1]) {
    allequal = 0;
    break;
  }

  if(allequal){
    cout << "0\n";
    return;
  }

  long long s = accumulate(a + 1, a + 1 + n, 0LL);
  if(s % n){
    cout << -(bool(s % n)) << '\n';
    return;
  }

  for(int i = 1; i <= n; i++) k += (a[i] > s / n);
  cout << k << '\n';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int t;
  for(cin >> t; t--; ) solve();
}
