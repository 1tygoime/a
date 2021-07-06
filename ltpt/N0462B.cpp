#include<bits/stdc++.h>
using namespace std;

int n, a[201]; long long s;

int main(){
  cin >> n;
  for(int i = 1; i <= n; i++) cin >> a[i], s += a[i];

  for(int i = 1; i <= n; i++)
    if(2LL * a[i] == s) return cout << a[i], 0;

  cout << 'N';
}
