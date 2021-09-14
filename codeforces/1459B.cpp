#include<bits/stdc++.h>
using namespace std;

int dp[1005][4];

int main(){
  int n;
  cin >> n;

  if(n & 1)
    cout << 2 * (n / 2 + 1) * (n / 2 + 2);
  else cout << (n / 2 + 1) * (n / 2 + 1);
}
