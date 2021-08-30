#include<bits/stdc++.h>
using namespace std;

#define ld long double

const int N = 10005;
const ld eps = 1e-9;

ld a[N];
int n, k;

bool c(ld m){
  int seg = 0;

  for(int i = 1; i <= n; i++)
    seg += int(a[i] / m);

  return seg >= k;
}

int main(){
  cin >> n >> k;

  for(int i = 1; i <= n; i++) cin >> a[i];

  ld L = 0, R = *max_element(a + 1, a + 1 + n);

  while(abs(R - L) > eps){
    ld M = (L + R) / 2;
    if(c(M)) L = M;
    else R = M;
  }

  cout << setprecision(6) << fixed << L;
}
