#include <bits/stdc++.h>
using namespace std;

int n, h[100001], l[100001], r[100001];

int main(){
  cin >> n;
  for(int i = 1; i <= n; i++) cin >> h[i];

  l[1] = h[1], r[n] = h[n];
  for(int i = 2; i <= n; i++) l[i] = max(l[i - 1], h[i]);
  for(int i = n - 1; i >= 1; i--) r[i] = max(r[i + 1], h[i]);

  long long res = 0;
  for(int i = 2; i <= n - 1; i++)
    if(min(l[i - 1], r[i + 1]) >= h[i]) res += min(l[i - 1], r[i + 1]) - h[i];

  cout << res;
}
