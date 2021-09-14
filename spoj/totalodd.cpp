#include<bits/stdc++.h>
using namespace std;

const int N = 2e6 + 5;

int a[N], n;

void solve(int x){
  int l = 1, r = upper_bound(a + 1, a + 1 + n, x) - a;
  int res = 1e9;

  while(l <= r)
    if(a[l] + a[r] < x) ++l;
    else
      res = min(res, a[l] + a[r]),
      --r;

  cout << res << '\n';
}

void Try(int c){
  if(c >= 2e8) return;

  a[++n] = c;

  for(int i = 1; i <= 9; i += 2)
    Try(c * 10 + i);
}

int main(){
  for(int i = 1; i <= 9; i += 2)
    Try(i);

  sort(a + 1, a + 1 + n);
//  cout << a[n] << endl;
//
  string s; int x;
  while(cin >> s){
    if(s == "[END]") return 0;
    cin >> x; solve(x);
  }
}
