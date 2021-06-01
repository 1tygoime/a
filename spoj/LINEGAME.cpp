#include <bits/stdc++.h>
using namespace std;

long long dp1, dp2;
int n;

int main(){
  cin >> n;
  for(int i = 1; i <= n; i++){
    long long x;
    cin >> x;
    long long dp11 = dp1, dp22 = dp2;
    dp1 = max(dp1, dp22 + x);
    dp2 = max(dp2, dp11 - x);
  }

  cout << max(dp1, dp2);
  return 0;
}
