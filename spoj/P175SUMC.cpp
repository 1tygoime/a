#include <bits/stdc++.h>
using namespace std;

bool dp[2001][2001];
vector <pair <int, int>> v = {{-1, -1}};
string s;
int n;
long long res;

bool cmp(const pair <int, int> &a, const pair <int, int> &b){
  return a.first < b.first && a.second < b.second && a.first < b.second && a.second < b.first;
}

int main(){
  cin >> s;
  n = s.size(), s = ' ' + s;

  for(int i = 1; i <= n; i++) dp[i][i] = 1;
  for(int len = 2; len <= n; len++)
    for(int i = 1; i <= n - len + 1; i++){
      int j = i + len - 1;
      dp[i][j] = (j - i == 1 || dp[i + 1][j - 1]) && s[i] == s[j];
    }

  for(int i = 1; i <= n; i++) for(int j = i; j <= n; j++)
    if(dp[i][j]) v.push_back({i, j});

  sort(v.begin(), v.end());
  int nn = (int)v.size() - 1;
//
//  pair <int, int> test = {1, 2};
//  auto it = upper_bound(v.begin() + 1, v.end(), test, cmp);
//  cout << it->first << ' ' << it->second;

  for(int i = 1; i <= nn; i++){
//    cout << v[i].first << ' ' << v[i].second << "\n\n";
    auto it = upper_bound(v.begin() + 1, v.end(), v[i], cmp);
    if(it == v.end()) continue;
    int pos = it - v.begin();
//    if(pos == nn + 1) continue;
//    cout << pos << '\n';
    res += nn - pos + 1;
  }
  cout << res;

  return 0;
}
