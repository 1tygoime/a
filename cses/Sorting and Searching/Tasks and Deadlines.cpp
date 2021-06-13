#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second

pair <long long, long long> a[200000];
int n; long long res, t;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  cin >> n;
  for(int i = 0; i < n; i++) cin >> a[i].f >> a[i].s;
  sort(a, a + n);

  for(int i = 0; i < n; i++){
    t += a[i].f;
    res += a[i].s - t;
  }

  cout << res;
}
