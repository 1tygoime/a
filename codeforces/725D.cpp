#include <bits/stdc++.h>
using namespace std;

int a, b, k;

int f(int &n){
  int c = 0;
  for(int i = 2; i * i <= n; i++){
    if(n % i) continue;
    while(n % i == 0) c++, n /= i;
  }
  return c + (n > 1);
}

void solve(){
  cin >> a >> b >> k;

  if(k == 1){
    if((a % b && b % a) || a == b) cout << "NO\n";
    else cout << "YES\n";
    return;
  }

  cout << (f(a) + f(b) >= k ? "YES\n" : "NO\n");

}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int t;
  for(cin >> t; t--; ) solve();
}
