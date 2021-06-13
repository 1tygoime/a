#include <bits/stdc++.h>
using namespace std;

long long res = -1e18, s_min, curr;
int n;

int main(){
  for(cin >> n; n--; ){
    long long x;
    cin >> x;
    curr += x;
    res = max(res, curr - s_min);
    s_min = min(s_min, curr);
  }

  cout << res;
}
