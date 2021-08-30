#include<bits/stdc++.h>
using namespace std;

int a[100001], pos[100001];
pair<int, int> b[100001];

void solve(){
  int n, k;
  cin >> n >> k;

  for(int i = 1; i <= n; i++)
    cin >> a[i],
    b[i].first = a[i],
    b[i].second = i;

  //compress
  sort(b + 1, b + 1 + n);
  int c = 0, last = 1e9;
  for(int i = 1; i <= n; i++){
    if(last != b[i].first)
      ++c,
      last = b[i].first;

    a[b[i].second] = c;
  }

  //a[i]<=n
  for(int i = 1; i <= n; i++)
    pos[i] = i;

  int res = 1;
  for(int i = 1; i < n; i++)
    if(pos[a[i]] == pos[a[i + 1]] - 1) continue;
    else res++;

//  for(int i = 1; i <= n; i++) cout << a[i] << ' ' << pos[i] << endl;

  cout << (res <= k || res == 1 ? "Yes\n" : "No\n");
}

int main(){
  int t;
  for(cin >> t; t--; ) solve();
}
