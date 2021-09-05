#include <bits/stdc++.h>
using namespace std;

long long c2(int n){
  return 1LL * n * (n + 1) / 2;
}

const int N = 5005;

int a[N];

int main(){
  int n;
  cin >> n;

  for(int i = 1; i <= n; i++)
    cin >> a[i];

  sort(a + 1, a + 1 + n);

  long long res = 0;
  int mx = -1e9;

  for(int k = 1; k <= n; k++){
    int i = 1, j = n, s = 2 * a[k];

    while(i < j && i <= k && j >= k)
      if(a[i] + a[j] > s) --j;
      else if(a[i] + a[j] < s) ++i;
      else{
        mx = max(mx, a[i] + a[j] + a[k]);
        int x = a[i], y = a[j], l = i, r = j;

        while(i < j && a[i] == x) ++i;
        while(i <= j && a[j] == y) --j;

        if(x != y) res += 1LL * (i - l) * (r - j);
        else res += c2(i - l + r - j - 1);
      }
  }

  cout << res << '\n' << mx;

  return 0;
}
