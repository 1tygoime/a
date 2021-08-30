#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;

int a[N];
deque<int> dmax, dmin;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int n, l, d;
  cin >> n >> l >> d;

  long long res = 0;

  for(int i = 1, j = 1; i <= n; i++){
    cin >> a[i];

    while(!dmax.empty() && a[dmax.back()] < a[i]) dmax.pop_back();
    dmax.push_back(i);
    while(!dmin.empty() && a[dmin.back()] > a[i]) dmin.pop_back();
    dmin.push_back(i);

    while(a[dmax.front()] - a[dmin.front()] > d){
      if(dmax.front() == j)
        dmax.pop_front();

      if(dmin.front() == j)
        dmin.pop_front();
      ++j;
    }

    if(i - j + 1 >= l) res += i - j + 1 - l;
  }

  cout << res;
  return 0;
}
