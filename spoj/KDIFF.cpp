#include <bits/stdc++.h>
using namespace std;

const int MAX = 3e5;

int n, k, a[MAX + 5], L[MAX + 5], R[MAX + 5];
deque<int> dmin, dmax;

void pop(deque<int> &d){
  while(!d.empty()) d.pop_back();
}

void calc(int *l){
  pop(dmax); pop(dmin);

  for(int i = 1, j = 1; i <= n; i++){
    while(!dmax.empty() && a[dmax.back()] < a[i]) dmax.pop_back();
    dmax.push_back(i);
    while(!dmin.empty() && a[dmin.back()] > a[i]) dmin.pop_back();
    dmin.push_back(i);

    while(a[dmax.front()] - a[dmin.front()] > k){
      if(dmax.front() == j) dmax.pop_front(); //decrease max
      if(dmin.front() == j) dmin.pop_front(); //increase min
      ++j;
    }

    l[i] = i - j + 1;
  }
}

int main(){
  cin >> n >> k;
  for(int i = 1; i <= n; i++) cin >> a[i];

  calc(L);
  reverse(a + 1, a + 1 + n);
  calc(R);
  reverse(R + 1, R + 1 + n);

  for(int i = 2; i <= n; i++) L[i] = max(L[i], L[i - 1]);
  for(int i = n - 1; i >= 1; i--) R[i] = max(R[i], R[i + 1]);

  int res = 0;
  for(int i = 1; i < n; i++) res = max(res, L[i] + R[i + 1]);
  cout << res;


  return 0;
}
