#include <bits/stdc++.h>
using namespace std;

int n;
long long t[60005], r[60005], f[60005];

int main(){
  cin >> n;
  for(int i = 1; i <= n; i++) cin >> t[i];
  for(int i = 1; i <= n - 1; i++) cin >> r[i];
  for(int i = 1; i <= n; i++){
    f[i] = f[i - 1] + t[i]; // tu mua
    if(i >= 2) f[i] = min(f[i], f[i - 2] + r[i - 1]); // mua ho
  }
  cout << f[n];
  return 0;
}
