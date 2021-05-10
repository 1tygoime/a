#include <bits/stdc++.h>
using namespace std;

map <long long, long long> mp;
long long x, s, k, res;

int main(){
  int n;
  mp[0] = 1;
  for(cin >> n >> k; n--; ){
    cin >> x;
    s += x;
    res += mp[s - k];
    mp[s]++;
  }
  cout << res;
  return 0;
}
    