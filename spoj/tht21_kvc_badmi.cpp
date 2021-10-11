#include<bits/stdc++.h>
using namespace std;

#define X first
#define Y second

const int N = 1e5 + 5;

pair<int, int> a[N], b[N];

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int n, m, q;
  cin >> n >> m >> q;

  for(int i = 1; i <= n; i++)
    cin >> a[i].X;
  for(int i = 1; i <= n; i++)
    cin >> a[i].Y;

  for(int i = 1; i <= m; i++)
    cin >> b[i].X;
  for(int i = 1; i <= m; i++)
    cin >> b[i].Y;

  sort(a + 1, a + 1 + n);

  while(q--){
    int k;
    cin >> k;

    multiset<pair<int, int>> ms;
    for(int i = k; i <= k + n - 1; i++)
      ms.insert(b[i]);

    int res = 0;
    for(int i = 1; i <= n; i++){
      auto it = ms.lower_bound(a[i]);
      if(ms.size() == 0 || it == ms.begin())
        continue;
      ms.erase(--it);
      res++;
    }

    cout << res << '\n';
  }

  return 0;
}
