#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;

int minP[N];
int cnt[N];

int f(int x){
  set<int> st;

  int res = 1;

  while(x != 1){
    if(st.count(minP[x]))
      st.erase(minP[x]);
    else
      st.insert(minP[x]);

    x /= minP[x];
  }

  for(int i: st)
    res *= i;

  return res;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  minP[0] = minP[1] = 1;
  for(int i = 2; i * i < N; i++)
    if(!minP[i])
      for(int j = i * i; j < N; j += i)
        if(!minP[j])
          minP[j] = i;
  for(int i = 2; i < N; i++)
    if(!minP[i])
      minP[i] = i;

  int n, m;
  cin >> n >> m;

  long long res = 1;

  for(int i = 1; i <= n; i++)
    cnt[f(i)]++;

  for(int i: cnt)
    res = (1LL * res * (i + 1)) % m;

  cout << res;

  return 0;
}
