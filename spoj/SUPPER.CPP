#include <bits/stdc++.h>
using namespace std;

int a[100005], L[100005], R[100005], n, m = 1, b[100005], lis;
multiset <int> s;

bool cmp(const int &a, const int &b){
  return a > b;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  for(int t = 10; t--; ){
    cin >> n;
    s.clear();
    for(int i = 1; i <= n; i++) cin >> a[i];
    memset(L, 0, sizeof(L));
    memset(b, 0, sizeof(b));
    memset(R, 0, sizeof(R));
    L[1] = m = 1, b[1] = a[1];
    for(int i = 2; i <= n; i++){
      L[i] = lower_bound(b + 1, b + 1 + m, a[i]) - b,
      m = max(m, L[i]),
      b[L[i]] = a[i];
    }
    lis = m;
    R[n] = m = 1, b[1] = a[n];
    for(int i = n - 1; i >= 1; i--){
      R[i]= lower_bound(b + 1, b + 1 + m, a[i], cmp) - b;
      m = max(m, R[i]);
      b[R[i]] = a[i];
    }
    for(int i = 1; i <= n; i++){
      if(L[i] + R[i] - 1 == lis) s.insert(a[i]);
    }
    cout << s.size() << "\n";
    for(const int &i: s) cout << i << ' ';
    cout << "\n";
  }
}
