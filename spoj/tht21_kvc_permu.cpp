#include<bits/stdc++.h>
using namespace std;

#define X first
#define Y second
const int N = 1e5 + 5;
const long long MOD = 1e9 + 7;

pair<int, int> seg[N];
int m, t;
int p[N];

void sub1(){
  for(int i = 1; i <= m; i++)
    p[i] = i;

  int res = 0;

  do{
    bool f = true;

    for(int i = 1; i <= t && f; i++)
      for(int j = seg[i].X; j <= seg[i].Y; j++)
        if(p[j] == j){
          f = false;
          break;
        }

    res += f;
  } while(next_permutation(p + 1, p + 1 + m));

  cout << res << '\n';
}

long long fact[N];
int d[N];

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  cin >> m >> t;

  for(int i = 1; i <= t; i++)
    cin >> seg[i].X >> seg[i].Y;

  if(m <= 10){
    sub1();
    return 0;
  }

  for(int i = 1; i <= t; i++)
    d[seg[i].X]++,
    d[seg[i].Y + 1]--;

  int cnt = 0;
  for(int i = 1; i <= m; i++){
    d[i] += d[i - 1];
    if(d[i] > 0)
      cnt++;
  }

  return 0;
}
