#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;

int minP[N], t[N], m[N];

void factorize(int x, int *c){
  while(x != 1){
    c[minP[x]]++;
    x /= minP[x];
  }
}

void solve(){
  memset(t, 0, sizeof(t));
  memset(m, 0, sizeof(m));

  int n;
  cin >> n;

  for(int i = 1; i <= n; i++){
    int x;
    cin >> x;
    factorize(x, t);
  }

  for(int i = 1; i <= n; i++){
    int x;
    cin >> x;
    factorize(x, m);
  }

  bool f = 0;

  for(int i = 2; i < N; i++){
    if(t[i] > 0 && m[i] > 0) {
      if(t[i] > m[i])
        t[i] -= m[i],
        m[i] = 0;
      else
        m[i] -= t[i],
        t[i] = 0;
    }

    if(i == 2 || i == 5) continue;
    if(m[i]){
      f = 1;
      break;
    }
  }

  cout << (f ? "repeating" : "finite") << '\n';
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  minP[0] = minP[1] = 1;
  for(int i = 2; i * i < N; i++)
    if(!minP[i])
      for(int j = i * i; j < N; j += i)
        if(!minP[j]) minP[j] = i;

  for(int i = 2; i < N; i++)
    if(!minP[i]) minP[i] = i;

  int t;
  for(cin >> t; t--; )
    solve();
}
