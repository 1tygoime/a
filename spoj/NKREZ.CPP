#include <bits/stdc++.h>
using namespace std;

#define p first
#define k second

int n, dp[10001];
pair <int, int> a[10001];

bool cmp(pair <int, int> a, pair <int, int> b){
  return a.k < b.k;
}

int bs(int R, int t){
  int L = 1;
  while(L <= R){
    int M = (L + R) / 2;
    if(M <= 0) break;
    if(a[M].k <= t) L = M + 1;
    else R = M - 1;
  }
  return R;
}

int main(){
  cin >> n;
  for(int i = 1; i <= n; i++) cin >> a[i].p >> a[i].k;
  sort(a + 1, a + 1 + n, cmp);

  dp[1] = a[1].k - a[1].p;
  for(int i = 2; i <= n; i++){
    dp[i] = dp[i - 1];

    int pos = bs(i - 1, a[i].p);
    int val = (pos > 0 ? dp[pos] : 0);
    dp[i] = max(dp[i], val + a[i].k - a[i].p);
  }

  cout << *max_element(dp + 1, dp + 1 + n);
  return 0;
}
