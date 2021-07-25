#include<bits/stdc++.h>
using namespace std;

string t, p; int n;
bool d[200001]; int a[200001];

bool check(int x){
  int curr = 0;

  memset(d, 0, sizeof(d));
  for(int i = 1; i <= x; i++) d[a[i]] = 1;

  for(int i = 1; i <= n; i++)
    if(!d[i] && curr < (int)p.size() && t[i] == p[curr]) ++curr;

  return curr == p.size();
}

int main(){
  cin >> t >> p;
  n = t.size(); t = ' ' + t;
  for(int i = 1; i <= n; i++)
    cin >> a[i];

  int L = 0, R = n, res = 0;
  while(L <= R){
    int M = (L + R) / 2;
    if(check(M)) res = M, L = M + 1;
    else R = M - 1;
  }

  cout << res;

  return 0;
}
