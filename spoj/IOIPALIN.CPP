#include <bits/stdc++.h>
using namespace std;

struct element{
  char c;
  int pos;//, sign;
};

string s;
int dp[5005][5005], n, N;
element step[5005];

void trace(int i, int j){
  if(i >= j) return;

  if(s[i] == s[j]){
    trace(i + 1, j - 1);
    return;
  }

  if(dp[i][j] == dp[i + 1][j] + 1){
    step[N++] = {s[i], j + 1};
    trace(i + 1, j);
    return;
  }
  step[N++] = {s[j], i};
  trace(i, j - 1);


}

int main(){
  cin >> n >> s;
//  int n = s.size();
  s = ' ' + s;

  for(int len = 1; len <= n; len++){
    for(int i = 1; i <= n; i++){
      int j = i + len - 1;
      if(s[i] == s[j]) dp[i][j] = dp[i + 1][j - 1];
      else dp[i][j] = min(dp[i][j - 1], dp[i + 1][j]) + 1;
    }
  }

  cout << dp[1][n] << '\n';
  trace(1, n);
  for(int i = 0; i < N; i++){
    s.insert(step[i].pos, 1, step[i].c);
    for(int j = i + 1; j < N; j++) if(step[j].pos >= step[i].pos) step[j].pos++;
  }
  s.erase(0,1);
  cout << s;
}
