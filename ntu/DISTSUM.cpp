#include<bits/stdc++.h>
using namespace std;

int x[100001], y[100001], n;

int main(){
  cin >> n;
  for(int i = 1; i <= n; i++) cin >> x[i] >> y[i];

  sort(x + 1, x + 1 + n);
  sort(y + 1, y + 1 + n);

  long long res = 0, s_x = 0, s_y = 0;
  for(int i = 1; i <= n - 1; i++){
    s_x += x[i];
    res += 1LL * x[i + 1] * i - s_x;

    s_y += y[i];
    res += 1LL * y[i + 1] * i - s_y;
  }

  cout << res;// << ' ' << s_x << ' ' << s_y;

  return 0;
}
