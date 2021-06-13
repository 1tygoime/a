#include <bits/stdc++.h>
using namespace std;

int a[200005], n;

void solve_stack(){
  stack <int> st;
  for(int i = 1; i <= n; i++){
    while(st.size() > 0 && a[st.top()] >= a[i]) {st.pop();}
    if(st.empty()) cout << 0 << ' ';
    else cout << st.top() << ' ';
    st.push(i);
  }
}

void solve_deque(){
  deque <int> dq;
  for(int i = 1; i <= n; i++){
    while(!dq.empty() && a[dq.back()] >= a[i]) dq.pop_back();
    if(dq.empty()) cout << 0 << ' ';
    else cout << dq.back() << ' ';
    dq.push_back(i);
  }
}

int main(){
  cin >> n;
  for(int i = 1; i <= n; i++) cin >> a[i];
  solve_deque();
}
