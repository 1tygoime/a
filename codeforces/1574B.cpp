#include<bits/stdc++.h>
using namespace std;

void orz_hd(){
  long long a, b, c, m;
  cin >> a >> b >> c >> m;

  long long max_m = a + b + c - 3;

  long long x[3] = {a, b, c};
  sort(x, x + 3, greater<int>());

  long long min_m = max(0LL, x[0] - x[1] - x[2]) - 1;

  cout << (min_m <= m && m <= max_m ? "YES\n" : "NO\n");
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int t;
  cin >> t;

  while(t--)
    orz_hd();

  return 0;
}
