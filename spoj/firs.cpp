#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

pair<int, int> a[N];
bool check[N];

int main(){
  int n;
  cin >> n;

  for(int i = 1; i <= n; i++)
    cin >> a[i].first,
    a[i].second = i;

  sort(a + 1, a + 1 + n);

  int res = 0;
  for(int i = 1; i <= n; i++)
    if(!check[a[i].second])
      ++res,
      check[a[i].second - 1] = check[a[i].second + 1] = 1;

  cout << res;

  return 0;
}
