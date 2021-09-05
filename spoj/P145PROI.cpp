#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;

int num[N], low[N], up[N];

bool valid(int n, int l, int u){
  return n > 0 && l > 0 && u > 0;
}

int main(){
  string s;
  cin >> s;

  int n = s.size();
  s = ' ' + s;

  long long res = 0;
  for(int i = 1; i <= n; i++)
    num[i] = num[i - 1] + isdigit(s[i]),
    low[i] = low[i - 1] + islower(s[i]),
    up[i] = up[i - 1] + isupper(s[i]);

  for(int i = 1, j = 1; i <= n; i++){
    while(j <= n && (!valid(num[j] - num[i - 1], low[j] - low[i - 1], up[j] - up[i - 1]) || j - i + 1 < 6))
      ++j;

    if(j <= n && valid(num[j] - num[i - 1], low[j] - low[i - 1], up[j] - up[i - 1]) && j - i + 1 >= 6)
      res += n - j + 1;
  }

  cout << res;
}
