#include<bits/stdc++.h>
using namespace std;

void solve(){
  string s;
  cin >> s;

  vector<int> odd, even;

  for(char c: s)
    if((c - '0') & 1)
      odd.push_back(c - '0');
    else
      even.push_back(c - '0');

  int i = 0, j = 0;

  while(i < (int)odd.size() && j < (int)even.size())
    if(odd[i] < even[j])
      cout << odd[i],
      ++i;
    else
      cout << even[j],
      ++j;

  while(i < (int)odd.size())
    cout << odd[i++];

  while(j < (int)even.size())
    cout << even[j++];

  cout << '\n';
}

int main(){
  int t;
  for(cin >> t; t--; ) solve();

  return 0;
}
