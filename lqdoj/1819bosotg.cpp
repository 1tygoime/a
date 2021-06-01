#include <bits/stdc++.h>
using namespace std;

int a[5001], n;
long long res;

int main(){
  cin >> n;
  for(int i = 1; i <= n; i++) cin >> a[i];

  sort(a + 1, a + 1 + n);
  for(int L = 1; L <= n; L++){
    int R = n - 1, c0 = n;
    while(L < R){
      if(a[L] + a[R] <= a[R + 1]){
        R--; continue;
      }
      while(a[L] + a[R] <= a[c0]) c0--;
      res += c0 - R;
      R--;
    }
  }

  cout << res;
}
