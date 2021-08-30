#include<bits/stdc++.h>
using namespace std;

#define getbit(x, i) ((x) >> (i) & 1LL)
#define onbit(x, i) ((x) |= (1LL << (i)))
#define offbit(x, i) ((x) &= (~(1LL << (i))))

const int MAX = 2e8;
const int SQRT_MAX = 15000;

int p[(MAX >> 6) + 5];
vector<int> pr = {2};

bool check(int x){
  if(x <= 1) return 0;
  if(x == 2) return 1;
  if((x & 1) == 0) return 0;
  if(getbit(p[x >> 6], (x & 63) >> 1) == 0) return 1;
  return 0;
}

void sieve(){
  for(int i = 3; i <= SQRT_MAX; i += 2)
    if(getbit(p[i >> 6], (i & 63) >> 1) == 0){
//      pr.push_back(i);
      for(int j = i * i; j <= MAX; j += i << 1)
        onbit(p[j >> 6], (j & 63) >> 1);
      }

  for(int i = 3; i <= MAX; i += 2)
    if(check(i)) pr.push_back(i);
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  sieve();

  int t;
  for(cin >> t; t--; ){
    int l, r;
    cin >> l >> r;

    if(l > r){
      cout << 0 << '\n';
      continue;
    }

    cout << upper_bound(pr.begin(), pr.end(), r) - lower_bound(pr.begin(), pr.end(), l) << '\n';
  }

  return 0;
}

