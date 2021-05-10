#include <bits/stdc++.h>
using namespace std;

typedef vector <int> bignum;

bignum dp[125][125];

void display(bignum x){
  for (int i = x.size()-1; i >= 0; i--) cout << x[i];
}

bignum operator+(bignum a, bignum b){
  int carry = 0;
  a.resize(max(a.size(), b.size()));
  b.resize(max(a.size(), b.size()));
  for(int i = 0; i < (int)a.size(); i++){
    a[i] += b[i] + carry;
    carry = (a[i] >= 10);
    a[i] %= 10;
  }
  if(carry) a.push_back(1);
  return a;
}

bignum operator-(bignum a, bignum b){
  int carry = 0;
  a.resize(max(a.size(), b.size()));
  b.resize(max(a.size(), b.size()));
  for(int i = 0; i < (int)a.size(); i++){
    a[i] -= b[i] + carry;
    carry = (a[i] < 0);
    if(carry) a[i] += 10;
  }
  while(!a.back() && a.size() > 1) a.pop_back();
  return a;
}

int main(){
  string s;
  cin >> s;
  int n = s.size();
  s = ' ' + s;
  bignum one = {1};
  for(int i = 1; i <= n; i++) dp[i][i] = one;
  for(int len = 2; len <= n; len++)
    for(int i = 1; i <= n - len + 1; i++){
      int j = i + len - 1;
      if(s[i] == s[j]) dp[i][j] = dp[i + 1][j] + dp[i][j - 1] + one;
      else dp[i][j] = dp[i + 1][j] + dp[i][j - 1], dp[i][j] = dp[i][j] - dp[i + 1][j - 1];
    }
  display(dp[1][n]);
}
