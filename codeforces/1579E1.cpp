#include<bits/stdc++.h>
using namespace std;

void orz_HuuDuc(){
  deque<int> dq;

  int n;
  cin >> n;

  for(int i = 1, x; i <= n; i++){
    cin >> x;

    if(dq.empty())
      dq.push_front(x);
    else if(x < dq.front())
      dq.push_front(x);
    else
      dq.push_back(x);
  }

  for(int i: dq)
    cout << i << ' ';

  cout << '\n';
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
