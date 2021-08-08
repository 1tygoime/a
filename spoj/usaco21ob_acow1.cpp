#include<bits/stdc++.h>
using namespace std;

int n, l, a[100001];

int f_h(){
  int i = 1;
  for(; i <= n && a[i] >= i; ++i);
  return i - 1;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  cin >> n >> l;
  for(int i = 1; i <= n; i++) cin >> a[i];

  sort(a + 1, a + n + 1, greater<int>());
  int h = f_h();

//  cout << h << l; return 0;

  for(int i = h + 1; i >= max(1, h - l + 2); i--) a[i]++;
  sort(a + 1, a + n + 1, greater<int>());

//  for(int i = 1; i <= n; i++) cout << a[i] << " \n"[i==n];
  cout << f_h();
  return 0;
}
