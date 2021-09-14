#include<bits/stdc++.h>
using namespace std;

set<int> s;
bool vst[10];

void Try(int i, int cur){
  if(i > 9) return;

  for(int j = 1; j <= 9; j++){
    if(vst[j]) continue;

    s.insert(cur * 10 + j);
    vst[j] = 1;
    Try(i + 1, cur * 10 + j);
    vst[j] = 0;
  }
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  Try(1, 0);

  for(int x; cin >> x; ){
    auto it = s.upper_bound(x);
    if(it == s.end()) cout << 0 << '\n';
    else cout << *it << '\n';
  }

  return 0;
}
