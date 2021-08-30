#include<bits/stdc++.h>
using namespace std;

long long suf[100005], a[100005];

int main(){
  int n, k, m;
  cin >> n >> k >> m;

  for(int i = 1; i <= n; i++)
    cin >> a[i];

  sort(a + 1, a + 1 + n);

  for(int i = n; i >= 1; i--)
    suf[i] = suf[i + 1] + a[i];

  long double res = -1e18;

  for(int i = 0; i <= min(n - 1, m); i++){
    long long ope = min(1LL * (m - i), 1LL * (n - i) * k);

    long long curr = suf[i + 1] + ope;

    res = max(res, (long double)1 * curr / (n - i));
  }

  cout << setprecision(6) << fixed << res;
}
