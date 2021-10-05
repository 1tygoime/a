#include<bits/stdc++.h>
using namespace std;

const int N = 50005;
const int BASE = 31;
const long long MOD = 1e9 + 7;

long long hashT[N];
long long POW[N];

long long getHash(int L, int R){
  return (hashT[R] - hashT[L - 1] * POW[R - L + 1] + MOD * MOD) % MOD;
}

int n, k;
string s;

bool check(int len){
  map<int, int> mp;

  for(int i = 1; i <= n - len + 1; i++)
    mp[getHash(i, i + len - 1)]++;

  for(auto [x, y] : mp)
    if(y >= k)
      return true;

  return false;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  cin >> n >> k >> s;

  s = ' ' + s;

  POW[0] = 1;
  for(int i = 1; i <= n; i++)
    POW[i] = POW[i - 1] * BASE % MOD,
    hashT[i] = (hashT[i - 1] * BASE + s[i] - 'a' + 1) % MOD;

  int L = 1, R = n, res = 0;
  while(L <= R){
    int M = (L + R) / 2;

    if(check(M))
      res = M,
      L = M + 1;
    else
      R = M - 1;
  }

  cout << res;

  return 0;
}
