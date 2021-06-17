#include <bits/stdc++.h>
using namespace std;

int m, n, a[1005][1005], h[1005], l[1005], r[1005], res;

void qry(int x){
  for(int i = 1; i <= m; i++){
    //i * n
    for(int j = 1; j <= n; j++) h[j] = (a[i][j] == x ? h[j] + 1 : 0);

    stack<int> st;
    st.push(0);
    for(int j = 1; j <= n; j++){
      while(!st.empty() && h[st.top()] >= h[j]) st.pop();
      l[j] = (st.empty() ? 1 : st.top() + 1);
      st.push(j);
    }

    st.push(n + 1);
    for(int j = n; j >= 1; j--){
      while(!st.empty() && h[st.top()] >= h[j]) st.pop();
      r[j] = (st.empty() ? n : st.top() - 1);
      st.push(j);
    }

    for(int j = 1; j <= n; j++) res = max(res, min(h[j], r[j] - l[j] + 1));
  }
}

int main(){
  cin >> m >> n;
  for(int i = 1; i <= m; i++)
    for(int j = 1; j <= n; j++) cin >> a[i][j];

  qry(0);
  qry(1);

  cout << res;
}
