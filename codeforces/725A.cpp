#include <bits/stdc++.h>
using namespace std;

int n, a[101];

void solve(){
  cin >> n;
  for(int i = 1; i <= n; i++) cin >> a[i];

  int mi = *min_element(a + 1, a + 1 + n), ma = *max_element(a + 1, a + 1 + n), res = n;

  //first pos min, first pos max
  int pos1 = -1, pos2 = -1;
  for(int i = 1; i <= n; i++)
    if(a[i] == mi){
      pos1 = i;
      break;
    }
  for(int i = 1; i <= n; i++)
    if(a[i] == ma){
      pos2 = i;
      break;
    }

  res = min(res, max(pos1, pos2));

  //first min last max
  for(int i = n; i >= 1; i--)
    if(a[i] == ma){
      pos2 = i;
      break;
    }
  res = min(res, pos1 + n - pos2 + 1);

  //last min last max
  for(int i = n; i >= 1; i--)
    if(a[i] == mi){
      pos1 = i;
      break;
    }

  res = min(res, max(n - pos1 + 1, n - pos2 + 1));


  //last min first max
  for(int i = 1; i <= n; i++)
    if(a[i] == ma){
      pos2 = i;
      break;
    }
  res = min(res, pos2 + n - pos1 + 1);

  cout << res << '\n';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int t;
  for(cin >> t; t--; ) solve();
}
