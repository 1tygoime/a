#include<bits/stdc++.h>
using namespace std;

int a[1000001];

long long c2(int n){
  return 1LL * n * (n + 1) / 2;
}

int main(){
  int n, s;
  cin >> n >> s;

  for(int i = 1; i <= n; i++) cin >> a[i];

  int i = 1, j = n;
  long long res = 0;

  while(i < j)
    if(a[i] + a[j] > s) --j;
    else if(a[i] + a[j] < s) ++i;
    else{
//      cout << i << ' ' << j << endl;

      int x = a[i], y = a[j], l = i, r = j;

      while(i < j && a[i] == x) ++i;
      while(i <= j && a[j] == y) --j;

//      cout << i << ' ' << j << endl;

      if(x != y) res += 1LL * (i - l) * (r - j);
      else res += c2(i - l + r - j - 1);

//      cout << endl;
    }

  cout << res;
}
