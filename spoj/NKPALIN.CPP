#include <bits/stdc++.h>
using namespace std;

string s1, s2;
int dp[2005][2005];
vector <char> trace;

int main(){
  cin >> s1;
  s2 = s1, s1 = '.' + s1;
  reverse(s2.begin(), s2.end());
  s2 = '.' + s2;

  for(int i = 1; i < (int)s1.size(); i++)
    for(int j = 1; j < (int)s2.size(); j++)
      if(s1[i] == s2[j]) dp[i][j] = dp[i - 1][j - 1] + 1;
      else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//  cout << s1.size() - 1 - dp[s1.size() - 1][s2.size() - 1] << "\n";

  for(int i = s1.size() - 1, j = s1.size() - 1; i && j; )
    if(s1[i] == s2[j]) trace.push_back(s1[i]), i--, j--;
    else if(dp[i][j] == dp[i][j - 1]) j--;
    else i--;
  for(int i = (int)trace.size() - 1; i >= 0; i--) cout << trace[i];
}
