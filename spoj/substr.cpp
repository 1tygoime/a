#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;
const int BASE = 31;
const long long MOD = 1e9 + 7;

long long hashT[N], POW[N], hashP;

long long getHashT(int L, int R){
  long long right = hashT[R];
  long long left = hashT[L - 1] * POW[R - L + 1];

  return right - left;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  //freopen(".inp", "r", stdin);

  string T, P;
  cin >> T >> P;

  int n = T.size(), m = P.size();
  T = ' ' + T, P = ' ' + P;

  POW[0] = 1;
  for(int i = 1; i <= n; i++)
    hashT[i] = (hashT[i - 1] * BASE + T[i] - 'a' + 1),
    POW[i] = POW[i - 1] * BASE;

  for(int i = 1; i <= m; i++)
    hashP = (hashP * BASE + P[i] - 'a' + 1);

  for(int i = 1; i <= n - m + 1; i++){
    if(getHashT(i, i + m - 1) == hashP)
      cout << i << ' ';
  }

  return 0;
}

