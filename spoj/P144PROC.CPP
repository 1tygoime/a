#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long

ll pw (ll a, ll n){
  if (n == 0) return 1;
  ll t = pw(a,n/2)%mod;
  t=t*t%mod;
  if (n % 2 == 1)
    t = (t*a)%mod;
  return t;
}

int main(){
  ll a, b;
  while(cin >> a >> b){
    if (!a && !b) return 0;
    cout << pw(a, b) << "\n";
  }
}
