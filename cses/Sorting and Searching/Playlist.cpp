#include <bits/stdc++.h>
using namespace std;

int n, a[200000], res;
map <int, int> ok;

int main(){
  cin >> n;
  for(int i = 0; i < n; i++) cin >> a[i];

  for(int i = 0, j = 0; i < n; i++){
    while(j < n && ok[a[j]] < 1) ok[a[j]]++, j++;
    res = max(res, j - i);
    ok[a[i]]--;
  }

  cout << res;
}
