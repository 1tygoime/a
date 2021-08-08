#include<bits/stdc++.h>
using namespace std;

int n; map <int, int> mp;

int main(){
  for(cin >> n; n--; ){
    int x;
    cin >> x;
    mp[x]++;
  }

  int res = 0;
  for(auto &x: mp){
    res += x.second / x.first;
  }

  cout << res;
}
