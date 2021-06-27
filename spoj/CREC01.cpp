#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e3 + 5;

int m, n, h[MAX], l[MAX];
long long res, c[MAX];
bool a[MAX][MAX];

int main(){
  cin >> m >> n;
  for(int i = 1; i <= m; i++)
    for(int j = 1; j <= n; j++){
      char c;
      cin >> c;
      a[i][j] = c - '0';
    }

  for(int i = 1; i <= m; i++){
    //i * n
    for(int j = 1; j <= n; j++) h[j] = (a[i][j] ? h[j] + 1 : 0);

    stack<int> st;
    st.push(0);
    for(int j = 1; j <= n; j++){
      while(!st.empty() && h[st.top()] >= h[j]) st.pop();
      l[j] = (st.empty() ? 1 : st.top() + 1);

      c[j] = c[l[j] - 1] + 1LL * h[j] * (j - l[j] + 1);
      res += c[j];

      st.push(j);
    }
  }

  cout << res;
}
