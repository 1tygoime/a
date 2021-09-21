#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e7 + 5;

bool p[N];

int get(int n, int p){
  int res = 0;
  while(n)
    n /= p,
    res += n;
  return res;
}

ll pw(ll a, ll n){
  if(!n) return 1;

  ll t = pw(a, n / 2);

  return n & 1 ? t * t % mod * a % mod : t * t % mod;
}

int main(){
  int n;
  cin >> n;

  for(int i = 2; i * i <= n; i++)
    if(!p[i])
      for(int j = i * i; j <= n; j += i)
        p[j] = 1;

  long long res = 1;
  for(int i = 2; i <= n; i++){
    if(p[i]) continue;

    int x = get(n, i);
    if(x <= 1) continue;
    if(x & 1) --x;

    res = (res * pw(i, x)) % mod;
  }

  cout << res;
}
