#include <bits/stdc++.h>
using namespace std;

#define w first
#define v second
#define db(x) cerr << #x << " = " << x << '\n';
const int MAX = (1 << 18) + 5;

/* ================================================== */
int n;
long long L, R;
pair <long long, long long> a[40];
void inp(){
  cin >> n >> L >> R;
  for(int i = 0; i < n; i++) cin >> a[i].w >> a[i].v;
}
/* ================================================== */

/* ================================================== */
int m;
vector <pair <long long, long long>> ok;
void Try1(int i, long long sum_w, long long sum_v){
  if(sum_w > R) return;
  if(i >= n / 2){
    ok.push_back({sum_w, sum_v});
    return;
  }

  Try1(i + 1, sum_w, sum_v);
  Try1(i + 1, sum_w + a[i].w, sum_v + a[i].v);
}
/* ================================================== */

/* ================= Build Sparse Table ================= */
int loga[MAX];
long long st[MAX][20];

void prep(){
  m = (int)ok.size() - 1;
  sort(ok.begin(), ok.end());

  for(int i = 2; i < MAX; i++) loga[i] = loga[i / 2] + 1;
}

void build(){
  for(int i = 0; i <= m; i++) st[i][0] = ok[i].v;

  for(int j = 1; (1 << j) <= m + 1; j++)
    for(int i = 0; i + (1 << (j - 1)) <= m; i++)
      st[i][j] = max(st[i][j - 1], st[i + (1 << (j - 1))][j - 1]);
}

long long get(int left, int right){
  int j = loga[right - left + 1];
  return max(st[left][j], st[right - (1 << j) + 1][j]);
}
/* ================= Build Sparse Table ================= */

/* ================================================== */

long long res;

void update(long long s_w, long long s_v){
  if(s_w + ok[0].w > R || s_w + ok[m].w < L) return;

  auto up = upper_bound(ok.begin(), ok.end(), make_pair(R - s_w, LLONG_MAX)) - ok.begin() - 1;
  auto low = lower_bound(ok.begin(), ok.end(), make_pair(L - s_w, LLONG_MIN)) - ok.begin();

//  if(low > up) return;
  res = max(res, s_v + get(low, up));
}

void Try2(int i, long long s_w, long long s_v){
  if(s_w > R) return;
  if(i >= n){
    update(s_w, s_v);
    return;
  }

  Try2(i + 1, s_w, s_v);
  Try2(i + 1, s_w + a[i].w, s_v + a[i].v);
}

/* ================================================== */

int main(){
  inp();

  Try1(0, 0, 0);

  prep();
  build();

  Try2(n / 2, 0, 0);

  cout << res;

  return 0;
}
