#include<bits/stdc++.h>
using namespace std;

const int MAX = 1e6 + 5;

int n, k, a[MAX], L[MAX], R[MAX];
stack<int> s;

int main(){
  cin >> n >> k;
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
    while(!s.empty() && a[s.top()] <= a[i]) s.pop();
    L[i] = s.empty() ? 1 : s.top() + 1;
    s.push(i);
  }

  s = stack<int>();
  for(int i = n; i >= 1; i--) {
    while(!s.empty() && a[s.top()] < a[i]) s.pop();
    R[i] = s.empty() ? n : s.top() - 1;
    s.push(i);
  }

  long long res = 0;
  for(int i = 1; i <= n; i++)
    if(a[i] == k) res += 1LL * (i - L[i] + 1) * (R[i] - i + 1);

  cout << res;
}
