#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;

int a[N], b[N];
int st[10 * N];
int n;

int compress(int x){
  return lower_bound(b + 1, b + 1 + n, x) - b;
}

int get(int id, int L, int R, int u, int v){
  if(v < L || R < u) return 0;
  if(u <= L && R <= v) return st[id];

  int M = (L + R) / 2;
  return (get(id * 2, L, M, u, v) + get(id * 2 + 1, M + 1, R, u, v));
}

void update(int id, int l, int r, int i, long long v){
  if (i < l || r < i)
    return;

  if (l == r){
    st[id] += v;
    return;
  }

  int mid = (l + r) / 2;
  update(id * 2, l, mid, i, v);
  update(id * 2 + 1, mid + 1, r, i, v);
  st[id] = (st[id * 2] + st[id * 2 + 1]);
}

void orz_HuuDuc(){
  cin >> n;

  for(int i = 0; i <= 4 * n; i++)
    st[i] = 0;

  for(int i = 1; i <= n; i++)
    cin >> a[i],
    b[i] = a[i];

  sort(b + 1, b + 1 + n);

  long long cnt = 0;

  for(int i = 1; i <= n; i++)
    a[i] = compress(a[i]);

  for(int i = 1; i <= n; i++){
    //count number < a[i]
    int cur1 = get(1, 1, n, 1, a[i] - 1);

    //count number > a[i]
    int cur2 = get(1, 1, n, 1, n) - get(1, 1, n, 1, a[i]);

    cnt += min(cur1, cur2);

    //update a[i] to all array
    update(1, 1, n, a[i], 1);
  }

  cout << cnt << '\n';

}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

//  freopen("D:\\Code\\Draft\\cc.inp", "r", stdin);

  int t;
  cin >> t;

  while(t--)
    orz_HuuDuc();

  return 0;
}
