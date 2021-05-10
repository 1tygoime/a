#include <bits/stdc++.h>
using namespace std;

#define pii pair <int, int>
#define w first
#define h second

bool cmp(const pii &a, const pii &b){
  if(a.w != b.w) return a.w < b.w;
  return a.h > b.h;
}

int n, b[20005];
pii a[20005];

void solve(){
  memset(b, 0, sizeof(b));
  cin >> n;
  for(int i = 1; i <= n; i++) cin >> a[i].w >> a[i].h;
  sort(a + 1, a + 1 + n, cmp);
  b[1] = a[n].second; int m = 1;
  for(int i = n - 1; i >= 1; i--){
    int k = upper_bound(b + 1, b + m + 1, a[i].second) - b;
    m = max(m, k);
    b[k] = a[i].second;
  }
  cout << m << '\n';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int t;
  for(cin >> t; t--;) solve();
}
