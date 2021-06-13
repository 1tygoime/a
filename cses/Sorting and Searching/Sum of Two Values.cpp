#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second

int n, x;
pair <int, int> a[200005];

int main(){
  cin >> n >> x;
  for(int i = 0; i < n; i++) cin >> a[i].f, a[i].s = i + 1;

  sort(a, a + n);
  for(int i = 0, j = n - 1; i < j; ){
    if(a[i].f + a[j].f == x) return !(cout << a[i].s << ' ' << a[j].s);
    else if(a[i].f + a[j].f < x) i++;
    else j--;
  }

  cout << "IMPOSSIBLE";
}
