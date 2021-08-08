#include<bits/stdc++.h>
using namespace std;

int s1[100001], s2[100001];

void solve(){
  int n;
  cin >> n;

  for(int i = 1; i <= n; i++)
    cin >> s1[i],
    s1[i] += s1[i - 1];

  int res = 1e9;
  for(int i = 1; i <= n; i++){
    cin >> s2[i],
    s2[i] += s2[i - 1];

    res = min(res, max(s1[n] - s1[i], s2[i - 1]));
  }

  cout << res << '\n';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int t;
  for(cin >> t; t--; ) solve();

}
