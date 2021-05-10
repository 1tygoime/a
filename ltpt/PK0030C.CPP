#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000000;

bool p[1000005];
pair <int, int> prime_pair[100005];
int cnt, t, x;

void sieve(){
  for(int i = 2; i * i <= MAX; i++)
    if(!p[i])
      for(int j = i * i; j <= MAX; j += i) p[j] = 1;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  sieve();
  for(int i = 2; i <= MAX; i++)
    if(!p[i] && !p[i + 6]) prime_pair[cnt++] = {i, i + 6};
  for(cin >> t; t--; ){
    cin >> x; x--;
    cout << prime_pair[x].first << ' ' << prime_pair[x].second << '\n';
  }
}
