#include <bits/stdc++.h>
using namespace std;

long long f[100005];
bool ban[100005];

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, k, x;
  for(cin >> n >> k; k--; ){
    cin >> x;
    ban[x] = 1;
  }
  f[1] = 1, f[2] = !ban[2];
  for(int i = 3; i <= n; i++)
    if (!ban[i]) f[i] = (f[i - 1] + f[i - 2]) % 14062008;
  cout << f[n];
  return 0;
}
