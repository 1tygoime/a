#include<bits/stdc++.h>
using namespace std;

int a[10001];

void orz_HuuDuc(){
  int n;
  long long h;
  cin >> n >> h;

  for(int i = 1; i <= n; i++)
    cin >> a[i];

  sort(a + 1, a + 1 + n);

  if(h <= a[n]){
    cout << 1 << '\n';
    return;
  }

  long long twoMax = a[n] + a[n - 1];
  long long operations = 2 * (h / twoMax);
  h -= twoMax * (h / twoMax);

  if(h > 0){
    if(h <= a[n]) operations++;
    else operations += 2;
  }

  cout << operations << '\n';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int t;
  for(cin >> t; t--;)
    orz_HuuDuc();

  return 0;
}
