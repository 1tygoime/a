#include <bits/stdc++.h>
using namespace std;

void solve(){
  int x;
  cin >> x;

  if(x == 1){
    cout << "Bob\n";
    return;
  }

  if(__builtin_popcount(x) == 1){
    int l = log2(x);
    cout << (l & 1 ? "Bob\n" : "Alice\n");
    return;
  }

  if(x & 1) cout << "Bob\n";
  else{
    for(int i = 2; i * i <= x; i++){
      if(x % i) continue;
      if(i & 1){
        cout << "Alice\n";
        return;
      }
      else if((x / i) & 1){
        cout << "Alice\n";
        return;
      }
    }
  }
}
int main(){
  int t;
  for(cin >> t; t--;) solve();
}
