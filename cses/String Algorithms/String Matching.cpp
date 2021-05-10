#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6 + 5;
const long long mod = 1e9 + 7;
const int base = 31;

long long hashs[MAX], POW[MAX], hashp;
string s, p;

long long gethashs(int i, int j) {
  return (hashs[j] - hashs[i - 1] * POW[j - i + 1] + mod * mod) % mod;
}

int main(){
  cin >> s >> p;
  int n_s = s.size(), n_p = p.size(), cnt = 0;
  s = ' ' + s, p = ' ' + p;

  POW[0] = 1;
  for(int i = 1; i <= n_s; i++) POW[i] = (POW[i - 1] * base) % mod;
  for(int i = 1; i <= n_s; i++) hashs[i] = (hashs[i - 1] * base + s[i] - 'a' + 1) % mod;
  for(int i = 1; i <= n_p; i++) hashp = (hashp * base + p[i] - 'a' + 1) % mod;

  for(int i = 1; i <= n_s - n_p + 1; i++)
    cnt += (gethashs(i, i + n_p - 1) == hashp);

  cout << cnt;
  return 0;
}
