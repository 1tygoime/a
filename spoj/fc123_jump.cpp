#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

int a[N], res[N];

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int n, q;
  cin >> n >> q;

  for(int i = 1; i <= n; i++)
    cin >> a[i];

  stack<int> st;

  for(int i = n; i >= 1; i--){
    while(!st.empty() && a[st.top()] <= a[i])
      st.pop();

    res[i] = st.size();
    st.push(i);
  }

  while(q--){
    int x;
    cin >> x;

    cout << res[x] << '\n';
  }

  return 0;
}
