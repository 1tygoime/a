#include <bits/stdc++.h>
using namespace std;

#define ll long long

priority_queue<ll, vector <ll>, greater<ll>> pq;

void solve(){
  int n;
  pq = priority_queue<ll, vector <ll>, greater<ll>>();

  for(cin >> n; n--; ){
    ll x;
    cin >> x;
    pq.push(x);
  }

  ll res = 0;
  while(pq.size() > 1){
    ll a = pq.top(); pq.pop();
    a += pq.top(); pq.pop();

    res += a;
//    cerr << a << endl;
    pq.push(a);
  }

//  cerr << pq.top() << endl;
  cout << res << '\n';
}

int main(){
  int t;
  for(cin >> t; t--; ) solve();

  return 0;
}
