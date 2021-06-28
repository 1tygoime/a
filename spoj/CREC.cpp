#include <bits/stdc++.h>
using namespace std;

const int MAX = 4e2 + 5;

int m, n, h[MAX], l[MAX];
long long res, cnt[MAX];
char a[MAX][MAX];

long long c(char x, char y, char z){
  long long t = 0;
  memset(h, 0, sizeof(h));
  for(int i = 1; i <= m; i++){
    for(int j = 1; j <= n; j++) h[j] = (a[i][j] == x || a[i][j] == y || a[i][j] == z ? h[j] + 1 : 0);

    stack<int> st;
    st.push(0);
    for(int j = 1; j <= n; j++){
      while(!st.empty() && h[st.top()] >= h[j]) st.pop();
      l[j] = (st.empty() ? 1 : st.top() + 1);

      cnt[j] = cnt[l[j] - 1] + 1LL * h[j] * (j - l[j] + 1);
      t += cnt[j];

      st.push(j);
    }
  }

  return t;
}

int main(){
  cin >> m >> n;
  for(int i = 1; i <= m; i++)
    for(int j = 1; j <= n; j++) cin >> a[i][j];

  for(int i = 'A'; i <= 'E'; i++)
    for(int j = i + 1; j <= 'E'; j++)
      for(int k = j + 1; k <= 'E'; k++)
        res += c(i, i, i) + c(j, j, j) + c(k, k, k)
             - c(i, i, j) - c(i, i, k) - c(j, j, k)
             + c(i, j, k);

  cout << res;
}
