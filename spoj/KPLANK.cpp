#include <bits/stdc++.h>
using namespace std;

int n, a[1000005];
int l[1000005]; // max position from 1 -> i: a[l[i]] < a[i]
int r[1000005]; // min position from i -> n: a[r[i]] < a[i]

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  cin >> n;
  for(int i = 1; i <= n; i++) cin >> a[i];

  stack <int> st;
  st.push(0);

  for(int i = 1; i <= n; i++){
    while(!st.empty() && a[st.top()] >= a[i]) st.pop();
    l[i] = st.top() + 1;
    st.push(i);
  }

  st.push(n + 1);
  for(int i = n; i >= 1; i--){
    while(!st.empty() && a[st.top()] >= a[i]) st.pop();
    r[i] = st.top() - 1;
    st.push(i);
  }

  int res = 0;
  for(int i = 1; i <= n; i++){
    //choose a[i] as edge

    //cant make square
    if(r[i] - l[i] + 1 < a[i]) continue;

    res = max(res, min(r[i] - l[i] + 1, a[i]));
  }

  cout << res;
}
