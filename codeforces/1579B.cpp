#include<bits/stdc++.h>
using namespace std;

const int N = 55;

int a[N];

void orz_HuuDuc(){
  int n;
  cin >> n;

  vector<tuple<int, int, int>> v;

  for(int i = 1; i <= n; i++)
    cin >> a[i];

  for(int i = 1; i <= n; i++){
    int curPos = i;

    for(int j = i + 1; j <= n; j++)
      if(a[j] < a[curPos])
        curPos = j;

    if(curPos == i)
      continue;

    v.push_back({i, curPos, curPos - i});

    vector<int> curr;
    curr.push_back(a[curPos]);
    for(int j = i; j < curPos; j++)
      curr.push_back(a[j]);

    int curIndex = i;
    for(int x: curr)
      a[curIndex++] = x;
  }

  cout << v.size() << '\n';
  for(auto [a, b, c] : v)
    cout << a << ' ' << b << ' ' << c << '\n';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int t;
  cin >> t;

  while(t--)
    orz_HuuDuc();

  return 0;
}
