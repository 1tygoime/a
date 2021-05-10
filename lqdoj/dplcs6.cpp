#include <bits/stdc++.h>
using namespace std;

int m, n, lct[100005], a[100005], b[100005], c[100005];

void init(int sz_1, int sz_2, int *arr1, int *arr2){
  for(int i = 1; i <= sz_1; i++) lct[arr1[i]] = i;
  for(int i = 1; i <= sz_2; i++) arr2[i] = lct[arr2[i]];
}

int lis(int sz, int *arr){
  int res = 1;
  b[1] = arr[1];
  for(int i = 2; i <= sz; i++){
    int k = lower_bound(b + 1, b + res + 1, arr[i]) - b;
    res = max(res, k);
    b[k] = arr[i];
  }
  return res;
}

int main(){
  cin >> m >> n;
  for(int i = 1; i <= m; i++) cin >> a[i];
  for(int i = 1; i <= n; i++) cin >> c[i];
  if(m > n){
    init(m, n, a, c);
    cout << lis(n, c);
  }
  else {
    init(n, m, c, a);
    cout << lis(m, a);
  }
}