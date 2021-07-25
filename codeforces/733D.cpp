#include<bits/stdc++.h>
using namespace std;

const int MAX = 2e5 + 5;

int n, a[MAX], res[MAX], ok[MAX];

void solve(){
  vector<int> st;

  cin >> n;
  for(int i = 1; i <= n; i++){
    cin >> a[i];

    if(!ok[a[i]]) ok[a[i]] = i;
    else st.push_back(i);
  }

  for(int i = 1; i <= n; i++)
    if(!ok[i]) ok[i] = st.back(), st.pop_back();

  for(int i = 1; i <= n; i++) res[ok[i]] = i;
  for(int i = 1; i <= n; i++)
    if(res[i] == i) swap(res[ok[a[i]]], res[i]);

  cout << count_if(res + 1, res + 1 + n, [](int i){return a[i] == res[i];}) << '\n';
  for(int i = 1; i <= n; i++) cout << res[i] << " \n"[i == n], res[i] = 0, ok[i] = 0;
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  int t;
  for(cin >> t; t--; ) solve();
}
