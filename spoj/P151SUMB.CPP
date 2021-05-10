#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, res = INT_MAX;
  cin >> n;

  for(int i = 0; i <= n / 5; i++){
    if ((n - 5 * i) % 3) continue;
    res = min(res, i + (n - 5 * i) / 3);
  }

  cout << (res == INT_MAX ? -1 : res);
}
