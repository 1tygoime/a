#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

int a[N];
vector<int> c[2];

void solve(){
  c[0].clear();
  c[1].clear();

  int n;
  cin >> n;

  int o = 0, e = 0;

  for(int i = 1; i <= n; i++)
    cin >> a[i],
    o += a[i] % 2,
    e += a[i] % 2 == 0;

  if(abs(o - e) > 1){
    cout << -1 << '\n';
    return;
  }

  for(int i = 1; i <= n; i++){
    a[i] &= 1;
    c[a[i]].push_back(i);
  }

  int dist1 = 0, dist2 = 0;

  if(n % 2 == 0){

    //01010101
    for(int i = 1, j = 0; i <= n; i += 2)
      dist1 += abs(c[0][j++] - i);

    //10101010
    for(int i = 1, j = 0; i <= n; i += 2)
      dist2 += abs(c[1][j++] - i);

    cout << min(dist1, dist2) << '\n';

  }

  else
    if(o > e) {
      for(int i = 1, j = 0; i <= n; i += 2)
        dist2 += abs(c[1][j++] - i);

      cout << dist2 << '\n';
    }
    else {
      for(int i = 1, j = 0; i <= n; i += 2)
        dist1 += abs(c[0][j++] - i);

      cout << dist1 << '\n';
    }

}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  for(cin >> t; t--; )
    solve();
}
