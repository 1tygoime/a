#include<bits/stdc++.h>
using namespace std;

vector<int> xor_val;

void solve(){
  int a, b;
  cin >> a >> b;

  xor_val = {a - 1, 1, a, 0};

  int tmp_a = a;
  int cur_xor = xor_val[(a - 1) % 4];

//  cout << cur_xor << endl;

  if(cur_xor == b){
    cout << a << '\n';
    return;
  }

  if(!cur_xor){
    cout << a + 1 + (a == b) << '\n';
    return;
  }

  cout << a + 1 + ((cur_xor ^ a) == b) << '\n';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int t;
  for(cin >> t; t--; )
    solve();
}
