#include <bits/stdc++.h>
using namespace std;

const int MAX = 4 * 1e5;

int n, a[MAX + 5], l[MAX + 5], r[MAX + 5], l1[MAX + 5], r1[MAX + 5];
long long res;

// l[i]: first position from 1 -> i: a[l[i]] <= a[i]
void calcL(){
  stack<int> s;
  s.push(0);

  for(int i = 1; i <= n; i++){
    while(!s.empty() && a[s.top()] > a[i]) s.pop();
    l[i] = (s.empty() ? 0 : s.top());
    s.push(i);
  }
}

// r[i]: first position from i -> n: a[l[i]] < a[i]
void calcR(){
  stack<int> s;
  s.push(n + 1);

  for(int i = n; i >= 1; i--){
    while(!s.empty() && a[s.top()] >= a[i]) s.pop();
    r[i] = (s.empty() ? n + 1 : s.top());
    s.push(i);
  }
}
//

// l1[i]: first position from 1 -> i: a[l[i]] >= a[i]
void calcL1(){
  stack<int> s;
  s.push(0);

  for(int i = 1; i <= n; i++){
    while(!s.empty() && a[s.top()] < a[i]) s.pop();
    l1[i] = (s.empty() ? 0 : s.top());
    s.push(i);
  }
}

// r1[i]: first position from i -> n: a[r[i]] > a[i]
void calcR1(){
  stack<int> s;
  s.push(n + 1);

  for(int i = n; i >= 1; i--){
    while(!s.empty() && a[s.top()] <= a[i]) s.pop();
    r1[i] = (s.empty() ? n + 1 : s.top());
    s.push(i);
  }
}
//

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  cin >> n;
  for(int i = 1; i <= n; i++) cin >> a[i];

  calcL(); calcR();
  calcL1(); calcR1();

  for(int i = 1; i <= n; i++)
    res += 1LL * a[i] * (1LL * (i - l1[i]) * (r1[i] - i) //number of subsequences which have a[i] as maximum element
                       - 1LL * (i - l[i]) * (r[i] - i)); //number of subsequences which have a[i] as minimum element


  cout << res;
  return 0;
}

