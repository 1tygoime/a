#include<bits/stdc++.h>
using namespace std;

int a[10001];

bool c(int x){
  int delta = 1 + 8 * x;

  if(sqrt(delta) != (int)sqrt(delta)) return 0;

  int res = -1 + sqrt(delta);
  if(res & 1) return 0;
  if(res <= 0) return 0;

  return 1;
}

int main(){
  int n;
  cin >> n;

  for(int i = 1; i <= n; i++) cin >> a[i];

  int curr = 0, res = 0;
  for(int i = 1; i <= n; i++){
//    cout << c(a[i]) << endl;

    if(c(a[i])){
      if(a[i - 1] <= a[i] && c(a[i - 1])) ++curr;
      else curr = 1;
    }
    else curr = 0;
    res = max(res, curr);

  }

  cout << res;
}
