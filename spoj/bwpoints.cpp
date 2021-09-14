#include<bits/stdc++.h>
using namespace std;

#define x first
#define y second

pair<int, int> a[200001];

int main(){
  int n;
  cin >> n;

  for(int i = 1; i <= n; i++)
    cin >> a[i].x,
    a[i].y = 0;

  for(int i = n + 1; i <= 2 * n; i++)
    cin >> a[i].x,
    a[i].y = 1;

  n <<= 1;
  sort(a + 1, a + n + 1);

  int cnt = 0;
  for(int i = 2; i <= n; i++)
    if(a[i].y != a[i - 1].y)
      ++i,
      ++cnt;

  cout << cnt;
}
