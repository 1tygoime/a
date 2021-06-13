#include <bits/stdc++.h>
using namespace std;

int a[17001], n, k;
deque<int> dq;

int main(){
  int t;
  for(cin >> t; t--; ){
    dq.clear();
    cin >> n >> k;

    for(int i = 1; i <= n; i++){
      cin >> a[i];
      //remove all elements >= a[i]
      while(!dq.empty() && a[dq.back()] >= a[i]) dq.pop_back();

      dq.push_back(i);

      //remove all elements out of range
      while(!dq.empty() && dq.front() <= i - k) dq.pop_front();

      //dq.front() = position of min element in range [i - k + 1 -> i]
      if(i >= k) cout << a[dq.front()] << ' ';
    }

    cout << '\n';
  }

  return 0;
}
