#include<bits/stdc++.h>
using namespace std;

#define x first
#define y second



void solve(){
  int W, H, w, h;
  pair<int, int> a, b;
  cin >> W >> H >> a.x >> a.y >> b.x >> b.y >> w >> h;

  pair<int, int> dist = {b.x - a.x, b.y - a.y};
  if(w + dist.x > W && h + dist.y > H){
    cout << -1 << '\n';
    return;
  }

  int res = 1e9;

  if(w + dist.x <= W)
    res = min({res,
               max(w - a.x, 0),
               max(b.x - W + w, 0)});

  if(h + dist.y <= H)
    res = min({res,
               max(h - a.y, 0),
               max(b.y - H + h, 0)
              });

  cout << setprecision(9) << fixed << 1.0 * res << '\n';

}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int t;
  for(cin >> t; t--; ) solve();
}
