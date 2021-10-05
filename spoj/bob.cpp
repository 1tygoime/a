#include <bits/stdc++.h>
using namespace std;

const int N = 1005;

int h[N], L[N];
long long cnt[N];
int a[N][N];

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int n, m;
  cin >> n >> m;

  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= m; j++)
      cin >> a[i][j];

  long long res = 0;

  for(int i = 1; i <= n; i++){
    stack<int> st;

    // for(int j = 1; j <= m; j++)
    //   if(a[i][j] == a[i - 1][j])
    //     h[j]++;
    //   else
    //     h[j] = 1;

    for(int j = 1; j <= m; j++){
      if(a[i][j] == a[i - 1][j])
        h[j]++;
      else
        h[j] = 1;

      while(!st.empty() && h[st.top()] >= h[j] && a[i][st.top()] == a[i][j])
        st.pop();

      L[j] = (st.empty() ? 1 : st.top() + 1);
      cnt[j] = 1LL * (j - L[j] + 1) * h[j];

      if(a[i][j] == a[i][L[j] - 1])
        cnt[j] += cnt[L[j] - 1];

      res += cnt[j];
      st.push(j);
    }
  }

  cout << res;

  return 0;
}