#include<bits/stdc++.h>
using namespace std;

#define val first
#define pos second

const int N = 1e5 + 5;

pair<int, int> a[N], b[N];

void orz_hd(){
  int n;
  cin >> n;

  for(int i = 1; i <= n; i++)
    cin >> a[i].val,
    a[i].pos = i;

  for(int i = 1; i <= n; i++)
    cin >> b[i].val,
    b[i].pos = i;

  sort(b + 1, b + 1 + n);
  b[n + 1] = {1e9, 1e9};

  for(int i = n; i >= 1; i--)
    b[i].pos = min(b[i].pos, b[i + 1].pos);

//  cout << endl;
//  for(int i = 1; i <= n; i++)
//    cout << b[i].val << ' ' << b[i].pos << '\n';
//  cout << endl;

  int res = 1e9;
  for(int i = 1; i <= n; i++){
    auto nearest = lower_bound(b + 1, b + 1 + n, make_pair(a[i].val, 0));

//    cout << b[i].val << ' ' << b[i].pos << endl;
//    cout << nearest->pos << ' ' << nearest->val << endl;

    if(nearest -> pos == 1e9) continue;

    int swaps = i + nearest->pos - 2;
    res = min(res, swaps);
  }

  cout << res << '\n';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int orz_;
  cin >> orz_;

  while(orz_--)
    orz_hd();

  return 0;
}
