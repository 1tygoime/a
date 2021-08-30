#include<bits/stdc++.h>
using namespace std;

const int N = (1 << 20) + 5;

int a[N], n, cnt[N];
pair<int, int> b[N];

long long calc(int k){
  long long c = 0;

  int dis = 0;
  for(int i = 1, j = 1; i <= n; i++){
    while(j <= n && dis + (cnt[a[j]] == 0) <= k)
      cnt[a[j]]++,
      dis += (cnt[a[j++]] == 1);

    c += j - i;
    dis -= (cnt[a[i]] == 1);
    cnt[a[i]]--;
  }

  return c;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int l, r;
  cin >> n >> l >> r;

  for(int i = 1; i <= n; i++){
    cin >> a[i];
    b[i] = {a[i], i};
  }

  sort(b + 1, b + 1 + n);

  int c = 0, last = 1e9;
  for(int i = 1; i <= n; i++){
    if(last != b[i].first)
      ++c,
      last = b[i].first;

    a[b[i].second] = c;
  }

  cout << calc(r) - calc(l - 1);
  return 0;
}
