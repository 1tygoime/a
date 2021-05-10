#include <bits/stdc++.h>
using namespace std;

int d[100005], n, q;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  cin >> n >> q;
  for(int i = 1; i <= n; i++){
    int x;
    cin >> x;
    d[i] = d[i - 1] + (x > 0);
  }
  while(q--){
    int x;
    cin >> x;
    cout << d[x] << '\n';
  }
  return 0;
}
