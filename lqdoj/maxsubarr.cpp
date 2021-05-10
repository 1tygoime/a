#include <bits/stdc++.h>
using namespace std;

long long s[1000001], k;
int n, res = -1;

bool cal(int len){
  for(int i = 1; i <= n - len; i++)
    if(s[i + len] - s[i] >= k) return 0;
  return 1;
}

int main(){
  cin >> n >> k;
  for(int i = 1; i <= n; i++) cin >> s[i], s[i] += s[i - 1];
  int L = 1, R = n;
  while(L <= R){
    int M = (L + R) / 2;
    if(cal(M)) res = max(res, M), L = M + 1;
    else R = M - 1;
  }
  cout << res;
  return 0;
}
