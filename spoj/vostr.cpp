#include<bits/stdc++.h>
using namespace std;

const int BASE = 31;
const long long MOD = 1e9 + 7;
const int N = 1e6 + 5;

int n, m;
string a, b;
long long POW[N];
long long hash1[N], hash2[N];

long long getHash(long long *H, int L, int R){
  return (H[R] - H[L - 1] * POW[R - L + 1] + MOD * MOD) % MOD;
}

void buildHash(long long *H, string s){
  for(int i = 1; i < (int)s.size(); i++)
    H[i] = (H[i - 1] * BASE + s[i] - 'a' + 1) % MOD; 
}

void solve(){
  int l, r, u, v;
  cin >> l >> r >> u >> v;

  int curLen = min(r - l + 1, v - u + 1);
  int L = 1, R = curLen;
  int pos = curLen + 1;

  while(L <= R){
    int M = L + R >> 1;

    if(getHash(hash1, l, l + M - 1) == getHash(hash2, u, u + M - 1))
      L = M + 1;
    else
      pos = M,
      R = M - 1;
  }

  if(pos == curLen + 1){
    if(r - l + 1 == v - u + 1)
      cout << '=';
    else if(r - l + 1 < v - u + 1)
      cout << '<';
    else
      cout << '>';

    return;
  }

  if(a[l + pos - 1] < b[u + pos - 1])
    cout << '<';
  else
    cout << '>';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> n >> m >> a >> b;

  a = ' ' + a;
  b = ' ' + b;

  POW[0] = 1;
  for(int i = 1; i < N; i++)
    POW[i] = POW[i - 1] * BASE % MOD;
  buildHash(hash1, a);
  buildHash(hash2, b);

  int t;
  cin >> t;

  while(t--)
    solve();

  return 0; 
}
