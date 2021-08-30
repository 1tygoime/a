#include<bits/stdc++.h>
using namespace std;

int a[10001];

int main(){
  int n, m;
  cin >> n >> m;

  for(int i = 1; i <= n; i++)
    cin >> a[i];

  sort(a + 1, a + 1 + n);

  int res = 0;
  for(int i = 1; i <= n; i++){
    int l = i + 1, r = n, tmp_s = m - a[i];

    while(l < r){
      if(a[l] + a[r] > tmp_s) --r;
      else
        res = max(res, a[i] + a[l] + a[r]),
        ++l;
    }
  }

  cout << res;
}
