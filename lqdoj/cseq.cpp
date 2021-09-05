#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;

long long a[N];

int main(){
  int n;
  long long s;

  cin >> n >> s;

  for(int i = 1; i <= n; i++)
    cin >> a[i];

  long long cur = 0, res = 0;

  for(int i = 1, j = 1; j <= n; j++){
    cur += a[j];

    while(cur > s)
      cur -= a[i],
      ++i;

    res += j - i + 1;
  }

  cout << res;
}
