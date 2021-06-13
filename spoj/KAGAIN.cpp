#include <bits/stdc++.h>
using namespace std;

int n, a[30005];
int l[30005]; // max position from 1 -> i: a[l[i]] < a[i]
int r[30005]; // min position from i -> n: a[r[i]] < a[i]

int calc(const int &i){
  return a[i] * (r[i] - l[i] + 1);
}

void solve(){
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

  int res = 1;
  for(int i = 2; i <= n; i++)
    //a[i] has minimium people
    if(calc(i) > calc(res)) res = i;

  cout << calc(res) << ' ' << l[res] << ' ' << r[res] << '\n';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int t;
  for(cin >> t; t--; ) solve();
}
