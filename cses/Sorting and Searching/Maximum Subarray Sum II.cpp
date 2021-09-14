#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;

long long s[N];

int main(){
  int n, a, b;
  cin >> n >> a >> b;

  for(int i = 1; i <= n; i++)
    cin >> s[i],
    s[i] += s[i - 1];

  long long res = -1e18;
  deque<int> dq;
  for(int i = a; i <= n; i++){
    while(!dq.empty() && dq.front() < i - b)
      dq.pop_front();

    while(!dq.empty() && s[i - a] <= s[dq.back()])
      dq.pop_back();

    dq.push_back(i - a);

    res = max(res, s[i] - s[dq.front()]);
  }

  cout << res;
}
