#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

long long a[N], b[N], st[N << 2];

void build(int id, int L, int R){
  if(L == R){
    st[id] = abs(a[L] - b[L]);
    return;
  }

  int M = L + R >> 1;
  build(id * 2, L, M);
  build(id * 2 + 1, M + 1, R);

  st[id] = __gcd(st[id * 2], st[id * 2 + 1]);
}

long long get(int id, int L, int R, int u, int v){
  if(v < L || R < u)
    return 0;
  if(u <= L && R <= v)
    return st[id];

  int M = L + R >> 1;

  return __gcd(get(id * 2, L, M, u, v), get(id * 2 + 1, M + 1, R, u, v));
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int n, k;
  cin >> n >> k;

  for(int i = 1; i <= n; i++)
    cin >> a[i];

  for(int i = 1; i <= n; i++)
    cin >> b[i];

  build(1, 1, n);

  while(k--){
    int l, r;
    cin >> l >> r;

    cout << get(1, 1, n, l, r) << '\n';
  }

  return 0;
}
