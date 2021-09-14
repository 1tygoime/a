#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

int n;
long long M, a[N], pref[N], suff[N];

bool check(long long val){
  long long v = 0;

  for(int i = 1; i <= n; i++)
    v += max(0LL, min(pref[i - 1], suff[i + 1]) - max(val, a[i]));

  return v >= M;
}

int main(){
  cin >> n >> M;

  for(int i = 1; i <= n; i++)
    cin >> a[i],
    pref[i] = max(pref[i - 1], a[i]);

  for(int i = n; i >= 1; i--)
    suff[i] = max(suff[i + 1], a[i]);

  long long res = -1e18, L = 0, R = 1e18;
  while(L <= R){
    long long mid = (L + R) / 2;

    if(check(mid))
      res = mid, L = mid + 1;
    else
      R = mid - 1;
  }

  cout << (res == -1e18 ? -1 : res);
  return 0;
}
