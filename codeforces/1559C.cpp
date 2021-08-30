#include<bits/stdc++.h>
using namespace std;


void solve(){
  int n;
  cin >> n;

  int has0 = 0;
  for(int i = 1; i <= n; i++){
    bool x;
    cin >> x;

    if(!x) has0 = max(has0, i);
  }

  if(!has0){
    cout << n + 1 << ' ';
    for(int i = 1; i <= n; i++) cout << i << ' ';
    cout << '\n';
    return;
  }

  for(int i = 1; i <= has0; i++) cout << i << ' ';
  cout << n + 1 << ' ';
  for(int i = has0 + 1; i <= n; i++) cout << i << ' ';

  cout << '\n';

}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int t;
  for(cin >> t; t--; )
    solve();

  return 0;
}
