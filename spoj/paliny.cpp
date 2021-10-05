#include<bits/stdc++.h>
using namespace std;

const int N = 5e4 + 5;
const int BASE = 31;

int n;
string s;
long long POW[N];
long long hashT[N];
long long rev_hashT[N];

long long getHash(int L, int R, long long *H){
  return H[R] - H[L - 1] * POW[R - L + 1];
}

bool check(int len){
  for(int i = 1; i <= n - len + 1; i++){
    int L = i, R = i + len - 1;

    int R_rev = n - i + 1, L_rev = R_rev - len + 1;

    if(getHash(L, R, hashT) == getHash(L_rev, R_rev, rev_hashT))
      return true;
  }

  return false;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  cin >> n >> s;

  string t = s;
  reverse(t.begin(), t.end());
  t = ' ' + t;
  s = ' ' + s;

  POW[0] = 1;
  for(int i = 1; i <= n; i++){
    POW[i] = POW[i - 1] * BASE;
    hashT[i] = hashT[i - 1] * BASE + s[i] - 'a' + 1;
    rev_hashT[i] = rev_hashT[i - 1] * BASE + t[i] - 'a' + 1;
  }

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
