#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  long long a, b;
  cin >> a >> b;

  long long nums_up = b / 13LL, nums_lo = (a - 1) / 13LL;
  long long sum_up = 13LL * (nums_up * (nums_up + 1) / 2LL),
            sum_lo = 13LL * (nums_lo * (nums_lo + 1) / 2LL);

  long long sum_all = (a + b) * (b - a + 1LL) / 2LL;

  cout << sum_all - sum_up + sum_lo;
  return 0;
}
