#include <bits/stdc++.h>
using namespace std;

#define x first
#define y second

struct house{
  int x, y, p;
} a[101];

bool ch[101];
int k, r, m, n, X[21], res;
pair<int, int> store[21];

bool in(const house &a, const pair<int, int> &b){
  return (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y) <= r * r;
}

void out(){
  int c = 0;

  //store
  for(int i = 1; i <= k; i++)
    //house
    for(int j = 1; j <= n; j++)
      if(in(a[j], store[X[i]])) ch[j] = 1;

  for(int i = 1; i <= n; i++)
    if(ch[i])
      c += a[i].p,
      ch[i] = 0;

  res = max(res, c);
}

// c(k, m)
void Try(int i){
  for(int j = X[i - 1] + 1; j <= m - k + i; j++){
    X[i] = j;
    if(i == k) out();
    else Try(i + 1);
  }
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  cin >> k >> r >> m;
  for(int i = 1; i <= m; i++) cin >> store[i].x >> store[i].y;

  cin >> n;
  for(int i = 1; i <= n; i++) cin >> a[i].x >> a[i].y >> a[i].p;

  Try(1);
  cout << res;

}
