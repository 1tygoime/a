#include <bits/stdc++.h>
using namespace std;

#define p first
#define k second

int n, dp[30001];
pair <int, int> a[30001];

int main(){
  cin >> n;
  for(int i = 1; i <= n; i++) cin >> a[i].p >> a[i].k;
  sort(a + 1, a + 1 + n);
//  dp[1] = a[1].k - a[1].p;
  for(int i = 1; i <= n; i++){
    dp[i] = a[i].k - a[i].p;
    for(int j = 1; j < i; j++) if(a[j].k <= a[i].p) dp[i] = max(dp[i], dp[j] + a[i].k - a[i].p);
  }
  cout << *max_element(dp + 1, dp + 1 + n);
  return 0;
}
