#include <bits/stdc++.h>
using namespace std;

//choose a[i] as the start point, from i + 1 -> n, any elements which > a[i] will be put to the right
                                                              //      < a[i] will be put to the left
int n, a[100005], b[100005], L[100005], R[100005];

void lis(int *l){
  int m = 1;
  memset(b, 0, sizeof(b));
  b[1] = a[1];
  for(int i = 2; i <= n; i++){
    l[i] = lower_bound(b + 1, b + m + 1, a[i]) - b;
    m = max(m, L[i]);
    b[l[i]] = a[i];
  }
}

int main(){
  cin >> n;
  for(int i = 1; i <= n; i++) cin >> a[i];

  //LIS start from i
  reverse(a + 1, a + 1 + n);
  lis(L);
  //LDS start from i
  for(int i = 1; i <= n; i++) a[i] = -a[i];
  lis(R);

  int res = 0;
  for(int i = 1; i <= n; i++) res = max(res, L[i] + R[i] - 1);

  cout << res;
}
