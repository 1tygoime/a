#include<bits/stdc++.h>
using namespace std;

const int N = 5e4 + 5;
const int BASE = 31;
const long long MOD = 1e9 + 7;

int n, res;
string s;
long long POW[N];
long long hashT[N];
long long rev_hashT[N];

long long getHash(int L, int R, long long *H){
  return (H[R] - H[L - 1] * POW[R - L + 1] + MOD * MOD) % MOD;
}

bool checkPalin(int L, int R){
  if(L < 1 || R > n)
    return false;

  int L_rev = n - R + 1, R_rev = n - L + 1;
  return (getHash(L, R, hashT) == getHash(L_rev, R_rev, rev_hashT));
}

void binarySearch(int center, bool f){
  int L = 0, R = n;
  while(L <= R){
    int M = (L + R) / 2;

    int firstPos = center - M + f;
    int lastPos = center + M;

    if(checkPalin(firstPos, lastPos))
      res = max(res, lastPos - firstPos + 1),
      L = M + 1;
    else
      R = M - 1;
  }
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  cin >> n >> s;

  s = ' ' + s;

  POW[0] = 1;
  for(int i = 1; i <= n; i++){
    POW[i] = POW[i - 1] * BASE % MOD;
    hashT[i] = (hashT[i - 1] * BASE + s[i] - 'a' + 1) % MOD;
    rev_hashT[i] = (rev_hashT[i - 1] * BASE + s[n - i + 1] - 'a' + 1) % MOD;
  }

  for(int i = 1; i <= n; i++){
    int L = 0, R = n;

    //odd center
    binarySearch(i, 0);

    //even center
    binarySearch(i, 1);
  }

  cout << res;

  return 0;
}
