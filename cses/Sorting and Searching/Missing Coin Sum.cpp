#include <bits/stdc++.h>
using namespace std;

int n;
long long a[200001], sum = 1;

int main(){
  cin >> n;
  for(int i = 1; i <= n; i++) cin >> a[i];
  sort(a + 1, a + 1 + n);
  for(int i = 1; i <= n && a[i] <= sum; ++i) sum += a[i];

  cout << sum;
}
