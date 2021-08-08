#include<bits/stdc++.h>
using namespace std;

const int N = 200000;

long long a[N + 5], st[N + 5][21];
int lo[N + 5], n;

void prep_log(){
  for(int i = 2; i <= N; i++) lo[i] = lo[i / 2] + 1;
}

bool get(int L, int R){
  int j = lo[R - L + 1];
  return __gcd(st[L][j], st[R - (1 << j) + 1][j]) > 1;
}

bool c(int l){
  for(int i = 1; i <= n - l + 1; i++)
    if(get(i, i + l - 1)) return 1;
  return 0;
}

void solve(){
  cin >> n;

  for(int i = 1; i <= n; i++)
    cin >> a[i];

  for(int i = 1; i <= n; i++)
    st[i][0] = abs(a[i + 1] - a[i]);
  --n;

  for(int j = 1; j <= 20; j++)
    for(int i = 1; i + (1 << (j - 1)) <= n; i++)
      st[i][j] = __gcd(st[i][j - 1], st[i + (1 << (j - 1))][j - 1]);

  int res = 0;
  for(int L = 0, R = n + 1; L <= R; ){
    int M = L + R >> 1;

    if(c(M)) res = M, L = M + 1;
    else R = M - 1;
  }

  cout << res + 1 << '\n';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  prep_log();
  int t;
  for(cin >> t; t--; ) solve();
}
