#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, q;
  cin >> n >> q;
  vector <int> a(n);
  for(int &i: a) cin >> i;

  while(q--){
    int l, r, c = 0;
    cin >> l >> r;

    --l, --r;
    for(int i = l; i <= r; i++)
      for(int j = i + 1; j <= r; j++) c += (a[i] > a[j]);

    cout << c << '\n';
  }

  return 0;
}
