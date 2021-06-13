#include<bits/stdc++.h>
using namespace std;

int n, a[17001], k;

void solve(){
  multiset <int> s;

  cin >> n >> k;
  for(int i = 1; i <= k; i++)
    cin >> a[i],
    s.insert(a[i]);

  cout << *(s.begin()) << ' ';
  for(int i = k + 1; i <= n; i++){
    cin >> a[i];
    s.insert(a[i]); s.erase(s.find(a[i - k]));
    cout << *(s.begin()) << ' ';
  }

  cout << '\n';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int t;
  for(cin >> t; t--; ) solve();

  return 0;
}
