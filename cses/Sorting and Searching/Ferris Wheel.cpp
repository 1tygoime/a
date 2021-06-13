#include <bits/stdc++.h>
using namespace std;

long long n, x, a[200005], res;

int main(){
//  freopen("C:\\Users\\Admin\\Downloads\\test_input.txt", "r", stdin);

  cin >> n >> x;
  for(int i = 0; i < n; i++) cin >> a[i];

  sort(a, a + n);
  for(int i = 0, j = n - 1; i <= j; j--){
    if(a[i] + a[j] <= x && i != j) i++;
    res++;
  }

  cout << res;
}
