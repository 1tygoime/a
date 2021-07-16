#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  for(cin >> t; t--; ){
    int x; cin >> x;
    cout << ceil(sqrt(x)) << '\n';
  }
  return 0;
}
