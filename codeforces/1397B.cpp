#include<bits/stdc++.h>
using namespace std;

int a[100005];

int main(){
  int n;
  cin >> n;

  for(int i = 1; i <= n; i++)
    cin >> a[i];

  sort(a + 1, a + 1 + n);

  long long res = LLONG_MAX;

  for(int c = 1; 1; c++){
    bool reach = 0;
    long long cur = 0, pw = 1;

    for(int i = 1; i <= n; i++){
      if(pw > 1e18 / c){
        reach = 1;
        break;
      }

      else if(cur > 1e18 - a[i] + pw){
        reach = 1;
        break;
      }

      cur += abs(a[i] - pw);
      pw *= c;
    }

    if(reach) break;
    else res = min(res, cur);
  }

  cout << res;

  return 0;
}
