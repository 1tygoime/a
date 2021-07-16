//havent done

#include<bits/stdc++.h>
using namespace std;

using ll = long long;

const ll MOD = 1e9 + 7;

int n, k, a[100001], pw2[100001];

int main(){
  cin >> n >> k;
  for(int i = 1; i <= n; i++) cin >> a[i],
                              a[i] %= MOD;

  pw2[0] = 1;
  for(int i = 1; i <= k; i++) pw2[i] = (pw2[i - 1] * 2) % MOD;

  sort(a + 1, a + 1 + n);

  //calc with 2^kz
  for(int i = 1; i <= k; i++)
}
