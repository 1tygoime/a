#include <bits/stdc++.h>
using namespace std;

int S[100005], n, k;
long long s, x, res;

int main(){
  S[0] = 1;
  for(cin >> n >> k; n--; ){
    cin >> x;
    s = (s % k + x % k + k) % k;
//    if(x % k == 0) res++;
    res += S[s];
    S[s]++;
  }
  cout << res;
  return 0;
}
